/*
    Introducing Array Basic Cpp

    Tidak bisa membaca jumlah panjang array seperti di pemrograman lain (.length)

    Tidak ada function built in seperti: (foreach) (sort) dsb

*/
#include <iostream>
using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Cara Membuat Array I
    // int no[5];
    // no[0] = 0;
    // no[1] = 1;
    // no[2] = 2;
    // no[3] = 3;
    // no[4] = 4;

    // Cara Membuat Array II
    int no[5] = {0,1,2,3,4};
    
    cout << &no[0] << " | Nilainya = " << no[0] << endl;
    cout << &no[1] << " | Nilainya = " << no[1] << endl;
    cout << &no[2] << " | Nilainya = " << no[2] << endl;
    cout << &no[3] << " | Nilainya = " << no[3] << endl;
    cout << &no[4] << " | Nilainya = " << no[4] << endl;
    cout << endl;

    // Memanipulasi Array Basic
    no[0] = no[4] + no[3];
    
    cout << &no[0] << " | Nilainya = " << no[0] << endl;
    cout << &no[1] << " | Nilainya = " << no[1] << endl;
    cout << &no[2] << " | Nilainya = " << no[2] << endl;
    cout << &no[3] << " | Nilainya = " << no[3] << endl;
    cout << &no[4] << " | Nilainya = " << no[4] << endl;
    cout << endl;
    cout << endl;

    // Mengambil Informasi-Informasi Array yg kita buat
    cout << "Ukuran Array : " << sizeof(no) << " Byte" << endl; 
    cout << "Panjang Array : " << (sizeof(no)/sizeof(int)) << " anggota" << endl; 

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}