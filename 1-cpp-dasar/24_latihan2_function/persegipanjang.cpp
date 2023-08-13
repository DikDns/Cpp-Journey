#include <iostream>
using namespace std;
// Fungsi Perhitungan Luas Persegi Panjang
double luas(double p, double l){
	double luas = p * l;
	return luas;
}
// Fungsi Perhitungan keliling Persegi Panjang
double keliling(double p, double l){
	double keliling = 2*(p+l);
	return keliling;
}
// Fungsi Tampilan dari pekerjaan void
void tl(double p, double l){
	cout << "Luasnya adalah " << luas(p,l) << endl;
}
void tk(double p, double l){
	cout << "Kelilingnya adalah " << keliling(p,l) << endl;
}

int main(){

	double panjang, lebar;

	cout << "Panjang : ";
	cin >> panjang;
	cout << "Lebar : ";
	cin >> lebar;

	tl(panjang, lebar);   //Menampilkan Fungsi Void
	tk(panjang, lebar);   //Menampilkan Fungsi Void

	cin.get();
	return 0;
}