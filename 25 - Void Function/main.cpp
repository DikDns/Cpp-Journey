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

// reporter
int kuadrat(int x){
    return x * x;
}

// worker
void tampilkan(int input){
    cout << "\n====| Void Tampilkan |===\n";
    cout << "Kuadratnya: " << input << endl;
}

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    int hasil1, hasil2, input, a ,b;

    cout << "Input : ";
    cin >> input;
    tampilkan(kuadrat(input));



    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}