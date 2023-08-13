/*
    Switch Statement
    kondisi dlm bentuk boolean

    rentetan kejadian
*/
#include <iostream>

using namespace std;

int main() {

    // inputan user
    int a;

    cout << "Masukan Angka : ";
    cin >> a;
    
    switch(a){
        case 5:
            cout << "Angka 5!\n";
        case 4:
            cout << "Angka 4!\n";
        case 3:
            cout << "Angka 3!\n";
        case 2:
            cout << "Angka 2!\n";
        case 1:
            cout << "Angka 1!\n";
            break;  // control flow stop
        default:
            cout << "Default\n";
    }




    cout << "=================[] Program Selesai! []=================" << endl;
    return 0;
}