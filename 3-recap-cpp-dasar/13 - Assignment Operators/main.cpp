/*
    Assignment Operator

    Memanipulasi Variabel


    += -= *= /= %=
*/

#include <iostream>

using namespace std;

int main() {
    
    // assignment operator
    int a = 16;

    cout << "Nilai Awal: " << a << endl;

    // (var) = (var) (operator) (expressions)
    //   a   =   a       +            5;

    // (var) (operator)= (expressions)
    //   a   +=    5;

    a += 4;
    cout << "Ditambah 4 : " << a << endl;
    
    a -= 4;
    cout << "Dikurang 4 : " << a << endl;

    a *= 4;
    cout << "Dikali 4   : " << a << endl;
    
    a /= 4;
    cout << "Dibagi 4   : " << a << endl;
    
    a %= 4;
    cout << "Modulus 4   : " << a << endl;
    
    cin.get();
    return 0;
}