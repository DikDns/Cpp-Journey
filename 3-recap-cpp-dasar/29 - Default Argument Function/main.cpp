/*
    Default Argument
*/
#include <iostream>
using namespace std;

double volume(double p = 1, double l = 1, double t = 1);

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    cout << "Volume Kubus : "  << volume(3,4,5) << endl;
    cout << "Volume Kubus : "  << volume(3,4) << endl;
    cout << "Volume Kubus : "  << volume(3) << endl;
    cout << "Volume Kubus : "  << volume() << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}

double volume(double p, double l, double t){
    return p * l * t;
}