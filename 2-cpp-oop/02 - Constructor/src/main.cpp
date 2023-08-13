#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
    public:
        string nama;
        string NIM;
        string jurusan;
        float IPK;

        /* 
            ini adalah constructor, 
            yang akan dipanggil saat pertama kali object ini dibuat. 
            harus sama dengan nama class nya ya(?)
        */
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, float inputIPK)
        {
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
            
            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::jurusan << endl;
            cout << Mahasiswa::IPK << endl;
            cout << endl;
        }
};

int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("Andy", "20201", "memasak", 3.6f);
    Mahasiswa mahasiswa2 = Mahasiswa("Beny", "20202", "menjahit", 1.6f);

    return 0;
}