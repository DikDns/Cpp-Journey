/*
    Recursion = Rekursif
    Fungsi yang mengulang dirinya sendiri

    finite recursion = rekursif terbatas

    1 1 2 3 5 8 13
    Formula:
        Fn = Fn-1 + Fn-2
*/
#include <iostream>
using namespace std;

long fibonacci(unsigned long n){
    if (n <= 1){
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    unsigned long n;

    cout << "Input n : ";
    cin >> n;

    cout << fibonacci(n) << endl;

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}