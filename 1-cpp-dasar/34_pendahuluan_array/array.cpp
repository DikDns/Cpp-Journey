#include <iostream>
using namespace std;
/*
	Array
	Membuat tipe data yang jalan menjadi berurut di dalam sistem memory (ram)
	
	Bisa juga tipe data yang lainnya!!
*/

int main()
{
	// Membuat array bisa juga shortway int nilai[100] = {0,1,2,3,4,5,...};
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " Nilainya " << nilai[0] << endl;
	cout << &nilai[1] << " Nilainya " << nilai[1] << endl;
	cout << &nilai[2] << " Nilainya " << nilai[2] << endl;
	cout << &nilai[3] << " Nilainya " << nilai[3] << endl;
	cout << &nilai[4] << " Nilainya " << nilai[4] << endl;

	cout << endl;
	cout << endl;

	int *ptr = nilai;
	*(ptr + 2) = 6;    // Cara pindah/memilih lokasi salah satu array berikut yang nomer 3

	cout << &nilai[0] << " Nilainya " << nilai[0] << endl;
	cout << &nilai[1] << " Nilainya " << nilai[1] << endl;
	cout << &nilai[2] << " Nilainya " << nilai[2] << endl;
	cout << &nilai[3] << " Nilainya " << nilai[3] << endl;
	cout << &nilai[4] << " Nilainya " << nilai[4] << endl;

	return 0;
}
