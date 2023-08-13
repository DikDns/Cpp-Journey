/*
    Reference

    menghubungkan dua variable
*/
#include <iostream>
using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Variable
    int a;
    a = 5;

    // pointer
    int *addressA = nullptr;
    addressA = &a;

    cout << "Address a      : " << addressA << "\n";
    cout << "Nilai a        : " << *addressA << "\n\n";

    // Reference
    int &b = a;

    cout << "Address b      : " << &b << "\n";
    cout << "Nilai b        : " << b << "\n\n";

    // mengubah nilai akan nyambung
    b = 10;
    cout << "b = 10;\n";
    cout << "Nilai a        : " << *addressA << "\n";
    cout << "Nilai b        : " << b << "\n\n";

    a = 0;
    cout << "a = 0;\n";
    cout << "Nilai a        : " << *addressA << "\n";
    cout << "Nilai b        : " << b << "\n\n";
    
    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}