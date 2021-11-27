/*
    If Else Statement
    kondisi dlm bentuk boolean
*/
#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Masukan Angka : ";
    cin >> a;
    
    if (a < 50){
        cout << "Nilai kamu kurang dari 50 ya? hehe\n" << a << endl;
    } else if (a > 50){
        cout << "Nilai kamu lebih dari 50 waw!\n" << a << endl;
    } else {    // jika kondisi awal tidak terpenuhi, maka masuk kesini
        cout << "Kok bisa pas banget 50, disengaja ya?\n";
    }

    cout << "Program Selesai!" << endl;
    return 0;
}