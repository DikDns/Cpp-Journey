#include <iostream>
#include <string>
#include <chrono>
using namespace std;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

// minimal class akan menggunakan 1 byte kalau kosong isinya
class Kosong
{
    public:
        
        int data()
        {
            return 1;
        }
};

class Isi
{
    public:
        int dataInt1;       // 4  byte
        int dataInt2;       // 4  byte
        double dataDouble;  // 8  byte
        string dataStr;     // 32 byte

};

class Mahasiswa
{
    public:
        string nama;

        Mahasiswa(const char* nama)
        {
            Mahasiswa::nama = nama;
        }
};


int main()
{
    // besaran memory untuk sebuah object
    // menampilkan besar dari class Kosong
    cout << "Alokasi class Kosong : " << sizeof(Kosong) << endl;
    cout << "Alokasi class Isi    : " << sizeof(Isi) << endl;

    // Address
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("Andy");
    Mahasiswa* object2 = new Mahasiswa("Beny");
    string d;
    string e;

    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl;
    cout << object2 << endl;
    cout << &d << endl;
    cout << &e << endl;

    // seberapa cepat kita membuat object di masing-masing memory

    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    
    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("Cerry");
    *tStackEnd = Clock::now();

    
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("Deny");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;;
    cout << "Waktu pembuatan object di stack : " << durasi.count() << endl;

    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap  : " << durasi.count() << endl;

    return 0;
}