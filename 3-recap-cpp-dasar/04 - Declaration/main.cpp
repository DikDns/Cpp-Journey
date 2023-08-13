#include <iostream>

using namespace std;

int main() {
    // inisialisasi nilai default 0
    int a;
    // deklarasi nilai
    a = 20;
    cout << a << endl;

    // variabel untuk menyimpan input user
    int input;
    cout << "Masukan Nilai: ";
    cin >> input;
    cout << "\nIni adalah input kamu: ";
    cout << input << endl;
    
    cin.get();
    return 0;
}