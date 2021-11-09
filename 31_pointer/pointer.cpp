#include <iostream>
using namespace std;

// Pointer selalu bertipe data integer = 4 byte!

int main()
{
	int a = 5;

	// Pointer menggunakan *;
	int *aPtr = nullptr; // nullptr; membuat alamat pointer kosong!!!

	// int a mempunyai nilai dan address
	cout << "Nilai dari a : " << a << endl;
	cout << "Alamat dari a : " << &a << endl; // &a; untuk mengetahui alamat variabel


	// Deferencing mengambil data dari sebuah pointer
	cout << "Mengambil data dari pointer : " << *aPtr << endl;

	
	cin.get();
	return 0;
}