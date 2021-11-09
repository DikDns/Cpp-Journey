#include <iostream>
#include <string>
/*
    kalau mau buat class harus sebelum int main!
*/

using namespace std;

class Mahasiswa                 // satu template class
{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

};



int main()
{
    Mahasiswa data1;            // object pertama dari template itu
    data1.nama = "Andy";
    data1.NIM = "02117182020";
    data1.jurusan = "memasak";
    data1.IPK = 2.8;

    Mahasiswa data2;
    data2.nama = "Beny";        // object kedua dari template itu
    data2.NIM = "02116171992";
    data2.jurusan = "menjahit";
    data2.IPK = 3.5;

    cout << "nama dari data1    : " << data1.nama << endl;
    cout << "NIM dari data1     : " << data1.NIM << endl;
    cout << "jurusan dari data1 : " << data1.jurusan << endl;
    cout << "IPK dari data1     : " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "nama dari data2    : " << data2.nama << endl;
    cout << "NIM dari data2     : " << data2.NIM << endl;
    cout << "jurusan dari data2 : " << data2.jurusan << endl;
    cout << "IPK dari data2     : " << data2.IPK << endl;
    return 0;
}