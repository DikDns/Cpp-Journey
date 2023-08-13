/*
    Aritmetika Dasar
    +, -, *, /, %,

    untuk pembagian salah satu harus float dan variable hasil juga float
    sedangkan modulus tidak bisa

*/

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    float y = 10;
    float hasil;

    // Penjumlahan
    hasil = x + y;
    cout << x;
    cout << " + ";
    cout << y;
    cout << " = ";
    cout << hasil << endl;
    // Satu baris
    cout << x << " + " << y << " = " << hasil << endl;

    // Pengurangan
    hasil = x - y;
    cout << x << " - " << y << " = " << hasil << endl;

    // Perkalian
    hasil = x * y;
    cout << x << " * " << y << " = " << hasil << endl;
    
    // Pembagian
    hasil = x / y;
    cout << x << " / " << y << " = " << hasil << endl;
    
    // Modulus
    int a = 7;
    int b = 2;
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    cin.get();
    return 0;
}