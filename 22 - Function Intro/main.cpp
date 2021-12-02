/*
    Functions Introduction
    library cmath : referensi www.cppreference.com
    ceil(x) 	<- pembulatan ke atas
    cos(x) 		<- cosinus
    exp(x) 		<- eksponen
    fabs(x) 	<- nilai absolut dalam float
    floor(x) 	<- pembulatan ke bawah
    fmod(x) 	<- modulus dalam float
    log(x) 		<- logaritma dengan basis natural
    log10(x) 	<- logaritma dengan basis 10
    pow(x,y) 	<- x pangkat y
    sin(x) 		<- sinus
    sqrt(x) 	<- akar kuadrat
    tan(x) 		<- tangen
*/
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    int n;

    cout << "Input : ";
    cin >> n;

    double result = sqrt(n);
    cout << "Hasil akar dari " << n << " adalah " << result << endl;
    result = sin(n);
    cout << "Hasil sinus dari " << n << " adalah " << result << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}