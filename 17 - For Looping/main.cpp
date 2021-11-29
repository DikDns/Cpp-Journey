/*
    Do While Looping

    (Start)  << << <<         
    \/              /\
    \/              /\
    (Aksi)          /\
    \/              /\
    \/      Yes     /\
    (Syarat) >> >> >>      
    \/ No              
    \/
    (End)   

    for(inisialisasi, kondisi, increment){
        Statement
    }
    
*/
#include <iostream>

using namespace std;

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Looping For
    for(int penghitung = 0; penghitung < 5; penghitung++){
        cout << "Aku sedang Berputar! ";
        cout << penghitung << endl << endl;
    }
    
    // Looping Kompleks
    int total = 0;
    cout << "total || i" << endl;
    for(int i = 0; i < 5; total += i, i++){
        cout << total << "     +     " << i << endl;
    }
    cout << "total : " << total << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}