/*
    Recursion = Rekursif
    Fungsi yang mengulang dirinya sendiri

    finite recursion = rekursif terbatas
*/
#include <iostream>
using namespace std;

long factorial(unsigned long x){
    if (x <= 1){
        cout << x << " = ";
        return x;
    }
    cout << x << " * ";
    return x * factorial((x - 1));
}

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    unsigned long x;

    cout << "Input x : ";
    cin >> x;

    cout << "Hasil faktorial : " << factorial(x) << endl;

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}