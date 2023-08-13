#include <iostream>
#include <cmath>
using namespace std;
/*
	Pengenalan Fungsi :
	tipedata output(tipedata input){
		Statement
	}

	int main adalah contoh fungsi.
	sqrt(x); adalah contoh fungsi perhitungan akar.
*/
int main()
{
	int x;

	cout << "Input x: ";
	cin >> x;

	double y = sqrt(x); // Ini adalah fungsi dari standart library <cmath>

	cout << "Akarnya adalah " << y << endl;


	
	cin.get();
	return 0;
}