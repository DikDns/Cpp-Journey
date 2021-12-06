/*
    Pointer

    pointer selalu tipe data integer

    int a = 5;      || punya value dan address

*/
#include <iostream>
using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    int a = 5;

    // pointer
    int *adressA = nullptr;
    adressA = &a;

    cout << "Value  a               : " << a << endl;
    cout << "Adress a               : " << adressA << endl;

    // mengambil nilai dari suatu alamat
    cout << "Value from Adress a    : " << *adressA << endl;

    // Jika a diubah maka akan nyambung linked
    a = 10;
    cout << "Adress a               : " << adressA << endl;
    cout << "Value from Adress a    : " << *adressA << endl;
    
    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}