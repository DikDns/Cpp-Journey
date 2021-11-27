/*
    If Statement
    kondisi dlm bentuk boolean
*/
#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Masukan Angka : ";
    cin >> a;
    
    if (a)  // ketika 0 atau false akan tidak di jalankan
    {
        cout << "Nilai yang kamu masukan bukan 0, maka if statement berhasil!\n";
        cout << "Nilai yang kamu masukan : " << a << endl;
    }


    cout << "Program Selesai!" << endl;
    cin.get();
    return 0;
}