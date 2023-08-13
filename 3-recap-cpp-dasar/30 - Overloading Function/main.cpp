/*
    Overloading = Menimpa
*/
#include <iostream>
using namespace std;

// Basic Function
int area(int p, int l){
    return p * l;
}

// Overload Function
int area(int s){
    return s * s;
}

// Overload Function
double area(double s){
    return s * s;
}

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    cout << "Luas 2 x 5       : " << area(2,5) << endl;
    cout << "Luas 2 x 2       : " << area(2) << endl;
    cout << "Luas 2.5 x 2.5   : " << area(2.5) << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}