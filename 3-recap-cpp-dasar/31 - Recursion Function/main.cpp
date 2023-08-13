/*
    Recursion = Rekursif
    Fungsi yang mengulang dirinya sendiri

    finite recursion = rekursif terbatas
*/
#include <iostream>
using namespace std;

int power_iteration(int a, int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int power_recursion(int a, int b){
    // Limit of this function recursion
    if (b <= 0){
        cout << "\nAkhir Rekursif";
        return 1;
    } else {
        cout << "\nRekursif";
        return a * power_recursion(a, (b - 1));
    }
}

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    int x, y;

    cout << "Input x : ";
    cin >> x;
    cout << "Input y : ";
    cin >> y;

    cout << "1) Hasil " << x << " pangkat " << y << " = " << power_iteration(x, y) << endl;
    cout << "2) Hasil " << x << " pangkat " << y << " = " << power_recursion(x, y) << endl;

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}