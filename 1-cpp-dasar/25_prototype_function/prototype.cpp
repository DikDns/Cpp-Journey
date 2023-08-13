#include <iostream>
using namespace std;
/*
	Prototype seperti deklarasi!
	sangat berfungsi pada multi file!
*/

double luas(double p, double l);
double keliling(double p, double l);
void tl(double p, double l);
void tk(double p, double l);

int main(){

	double panjang, lebar;

	cout << "Panjang : ";
	cin >> panjang;
	cout << "Lebar : ";
	cin >> lebar;

	tl(panjang, lebar);   
	tk(panjang, lebar);   

	cin.get();
	return 0;
}

double luas(double p, double l){
	return p * l;
}

double keliling(double p, double l){
	return 2*(p+l);
}

void tl(double p, double l){
	cout << "Luasnya adalah " << luas(p,l) << endl;
}

void tk(double p, double l){
	cout << "Kelilingnya adalah " << keliling(p,l) << endl;
}
