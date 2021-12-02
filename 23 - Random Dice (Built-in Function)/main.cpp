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
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    char input;
    cout << "\n=======|  Mulai  |=======\n\n";

    while(true){
        cout << "Lempar dadu? (y/n) ";
        cin >> input;

        if (input == 'y'){
            cout << "====( " << 1 + (rand() % 6) << " )====" << endl;
        } else if (input == 'n') {
            cout << "\nTerima Kasih!\n" << endl;
            break;
        } else {
            cout << "Warning: hanya menerima 'y' atau 'n' saja!" << endl;
        }
    }

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}