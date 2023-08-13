/*
    While Looping

    (Start)  << << <<         
    \/              /\
    \/              /\
    (Syarat) >> >> (Aksi)        
    \/
    \/
    (End)        

    while(Syarat){
        Aksi;
    }
    
*/
#include <iostream>

using namespace std;

int main() {
    int a, b;
    a = 0;
    
    while(a < 5){
        cout << "Aku sedang Berputar! ";
        a += 2;
        cout << a << endl << endl;
    }
    
    cout << "\n=======|Selesai|=======\n";
    cin.get();
    return 0;
}