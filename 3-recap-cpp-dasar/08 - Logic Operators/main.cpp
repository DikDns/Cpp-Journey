/*
    Logic Operator
    not     !
    and     &&
    or      ||

*/

#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int b = 10;
    bool hasil;

    hasil = (a == 5) && (b == 10);
    // jika kedua komparasi true maka hasil akan true

    hasil = (a == 5) || (b == 10);
    // jika salah satu komparasi true maka hasil akan true

    hasil = !((a == 5) && (b == 10));
    // kebalikannya

    hasil = !((a == 5) || (b == 10));
    // kebalikannya

    cout << hasil << endl;
    
    return 0;
}