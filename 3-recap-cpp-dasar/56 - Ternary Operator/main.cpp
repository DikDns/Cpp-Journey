/*
!   High Level Operators
    Ternary Operator
    (kondisi) ? (hasil true) : (hasil false)
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    int x;
    string hasilTrue, hasilFalse, output;

    cout << "Input Number : ";
    cin >> x;

    hasilTrue = "Nilai yang anda masukan lebih kecil dari 10";
    hasilFalse = "Nilai yang anda masukan lebih besar dari 10";

    output = (x < 10) ? hasilTrue : hasilFalse;

    // if (x < 10){
    //     output = hasilTrue;
    // } else {
    //     output = hasilFalse;
    // }

    cout << output;
    cout << endl;


    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}