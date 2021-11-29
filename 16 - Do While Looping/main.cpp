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

    do{
        Aksi;
    } while();
    
*/
#include <iostream>

using namespace std;

int main() {
    int a, b;
    a = 0;
    
    do {
        cout << "Aku sedang Berputar! ";
        cout << a << endl << endl;
        a += 2;
    } while (a < 5);
    
    
    cout << "\n=======|Selesai|=======\n";
    cin.get();
    return 0;
}