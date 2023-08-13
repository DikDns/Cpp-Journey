/*
    Scope Variable
    Global, Local, Block
*/
#include <iostream>
using namespace std;

// Variable Global
char huruf = 'G';

// Ambil Variable Global
char ambilGlobal(){
    return huruf;
}

// Variable Local Fungsi Huruf_f
char huruf_f(){
    char huruf = 'F';
    return huruf;
}

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    cout << "1) Variable Global          : " << huruf << endl;
    
    // Variable Local Main
    char huruf = 'M';
    
    cout << "2) Variable Local main()    : " << huruf << endl;
    cout << "3) Variable Global          : " << ambilGlobal() << endl;
    cout << "4) Variable Local huruf_f() : " << huruf_f() << endl;
    cout << "5) Variable Local main()    : " << huruf << endl;
    cout << "6) Variable Global          : " << ambilGlobal() << endl;

    // Block Scope Variable
    {
        cout << "7) Variable Local main()    : " << huruf << endl;
        char huruf = 'B';
        cout << "8) Variable Block Local     : " << huruf << endl;
    }

    // Ngambil Nilai Variable Global tanpa Function
    cout << "9) Variable Global          : " << ::huruf << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}