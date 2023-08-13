/*
    Reference Function

    Fungsi yang di input dengan reference
*/
#include <iostream>
using namespace std;

// Cara Penulisan Prototype nya
void f(int &);
void quadrate(int &);


int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Variable
    int a = 8;

    cout << "Address a      : " << &a << "\n";
    cout << "Nilai a        : " << a << "\n\n";

    // contoh I    
    f(a);

    // Mengubah nilai original
    quadrate(a);
    cout << "Nilai a        : " << a << "\n\n";


    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}


void f(int &x){
    cout << "f() : "<< endl;
    cout << "Address x      : " << x << "\n";
    // Dereferencing
    cout << "Nilai x        : " << &x << "\n\n";
}

// Jadi bisa hemat memori karena pake reference
void quadrate(int &valuePtr){
    valuePtr = (valuePtr) * (valuePtr);
}