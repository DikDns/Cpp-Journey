/*
    Komparasi
    relation expression
    0 = false
    1 = true
*/
#include <iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 10;

    bool hasil1, hasil2;

    // Sebanding ==
    cout << (x == y) << endl;

    // Tidak Sebanding != (! = not)
    cout << (x != y) << endl;

    // kurang dari <
    cout << (1 < 2) << endl;

    // lebih dari >
    cout << (1 > 2) << endl;
    
    // Kalau Sama Gimana?
    cout << (1 < 1) << endl;
    
    // kurang dari sama dengan <=
    cout << (1 <= 1) << endl;

    // lebih dari sama dengan >=
    cout << (1 >= 1) << endl;
    
    cin.get();
    return 0;
}
