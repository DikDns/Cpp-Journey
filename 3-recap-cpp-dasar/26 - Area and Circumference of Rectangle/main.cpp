#include <iostream>
using namespace std;

// Hitung Luas
double area(double p, double l){
    return p * l;
}

// Hitung Keliling
double circumference(double p, double l){
    return 2 * (p + l);
}

// Tampilkan Text
void print(double a, double b){
    cout << "Luasnya adalah " << a << endl;
    cout << "Kelilingnya adalah " << b << endl;
}

int main() {
    cout << "\n=======|  Mulai  |=======\n\n";

    int p, l;

    cout << "Panjang : ";
    cin >> p;
    cout << "Lebar : ";
    cin >> l;

    print(area(p, l) , circumference(p, l));

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}