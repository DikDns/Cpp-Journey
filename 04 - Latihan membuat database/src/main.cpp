#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa
{
    public:
        string nama;
        string NIM;
        string jurusan;
    
    Mahasiswa(string nama, string NIM, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string stringify()
    {
        return "\n" + nama + " " + NIM + " " + jurusan;
    }

};

class DataBase
{
    public:
        ifstream in;
        ofstream out;
        string fileName;

    DataBase(const char* fileName)
    {
        DataBase::fileName = fileName;
    }

    void save (Mahasiswa data)
    {
        cout << data.nama << endl;
        DataBase::out.open(DataBase::fileName, ios::app);
        DataBase::out << data.stringify();
        DataBase::out.close();
    }

    void showAll()
    {
        DataBase::in.open(DataBase::fileName, ios::in);
        string nama,NIM,jurusan;
        int index = 1;

        while(!DataBase::in.eof())
        {
            DataBase::in >> nama;
            DataBase::in >> NIM;
            DataBase::in >> jurusan;

            cout << index++ << ".\t";
            cout << nama << "\t";
            cout << NIM << "\t";
            cout << jurusan << endl;
        }
    }

};



int main()
{
    char tombol;

    while(true)
    {
        // menampilkan data mahasiswa
        cout << "DATA MAHASISWA: " << endl;
        DataBase database = DataBase("data.txt");
        database.showAll();
        cout << endl;

        // menanyakan user input untuk menambahkan data
        cout << "Tambah data? (y/n): ";
        cin >> tombol;

        // Jika iya jalankan:
        if(tombol == 'y')
        {
            // User input
            string nama,NIM,jurusan;

            cout << "Input Nama: ";
            cin >> nama;
            cout << "Input NIM: ";
            cin >> NIM;
            cout << "Input Jurusan: ";
            cin >> jurusan;

            Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

            // memasukan data ke file data.txt
            database.save(dataMahasiswa);

            cout << endl;
        }
        // jika tidak program berhenti
        else if (tombol == 'n')
        {
            break;
        }
        // jika salah ketik ulang lagi
        else 
        {
            cout << "Ketik y atau n bro!" << endl;
            cout << endl;
        }
    }

    return 0;
}