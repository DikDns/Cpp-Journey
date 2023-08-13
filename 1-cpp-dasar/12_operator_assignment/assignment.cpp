#include <iostream>
using namespace std;

int main()
{
	// Assignment 
	int a = 10;
	cout << "Nilai awalnya adalah " << a << endl;

	// Variabel = Variabel Operator Ekspresi
	
	// Kalau Operator Assignment Seperti ini:
	// Variabel Operator(=) Ekspresi
	//     a         +=         4

	a += 3;
	cout << "Ditambah 3 menjadi " << a << endl;

	a -= 3;
	cout << "Dikurang 3 menjadi " << a << endl;

	a *= 3;
	cout << "Dikali 3 menjadi " << a << endl;

	a /= 3;
	cout << "Dibagi 3 menjadi " << a << endl;



	cin.get();
	return 0;
}
