/*
    Function with return

    1) tentukan tipe data
    2) pilih nama fungsi
    3) bikin input / argumen ()
    4) Body {}
    5) di dalam body tulis statement return

*/
#include <cmath>
#include <iostream>
using namespace std;

int kuadrat(int x){
    return x * x;
}

int mod(int a, int b){
    return a % b;
}

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    int hasil1, hasil2, input, a ,b;

    cout << "Input : ";
    cin >> input;
    cout << "Kuadratnya: " << kuadrat(input) << endl;

    cout << "\nMasukkan A : ";
    cin >> a;
    cout << "Masukkan B : ";
    cin >> b;
    cout << "Modulusnya: " << mod(a, b) << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}