#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
    public:
        string nama;
        double IPK;

    Mahasiswa(string nama, double IPK)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = IPK;
    }

    // method tanpa parameter, tanpa return
    void tampilkanData()
    {
        cout << "Nama: " << nama << " dengan IPK: ";
        cout << IPK << endl;
    }

    // method dengan parameter, tanpa return
    void ubahNama (const char* namaBaru)
    {
        Mahasiswa::nama = namaBaru;
    }

    // method dengan parameter, dengan return
    double katrolIPK(const double &tambahNilai)
    {
        return Mahasiswa::IPK + tambahNilai;
    }

    // method tanpa parameter, dengan return
    string Getnama()
    {
        return Mahasiswa::nama;
    }

    double GetIPK()
    {
        return Mahasiswa::IPK;
    }

};

int main()
{
    Mahasiswa mhs1 = Mahasiswa("Andy", 3.2f);
    Mahasiswa mhs2 = Mahasiswa("Beny", 3.9f);

    // menggunakan method penampil data
    mhs1.tampilkanData();
    mhs2.tampilkanData();

    // menggunakan method pengubah nama 
    mhs1.ubahNama("Cerry");
    mhs1.tampilkanData();

    // menggunakan method katrol IPK
    cout << "Katrol IPK " << mhs1.nama << " : " << mhs1.katrolIPK(0.8f) << endl;

    // menggunakan method GetIPK dan Getnama
    cout << "Getnama " << mhs2.nama << " : " << mhs2.Getnama() << endl;
    cout << "GetIPK  " << mhs2.nama << " : " << mhs2.GetIPK() << endl;

    return 0;
}