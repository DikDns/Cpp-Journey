#include <iostream>
using namespace std;

// Enum, data yg nilainya fix yg kita jabarkan!!!
// Memudahkan melihat datanya

enum warna
{
	putih, hitam, coklat, biru = 7, merah, ungu, jingga
};

int main()
{
	warna kain;

	kain = coklat;
	cout << kain << endl; // memperlihatkan urutan range dalam enumnya!
	cout << endl;

	if(kain == coklat)
	{
		cout << "Warna kain coklat!" << endl;
	}

	cout << endl;
	kain = merah;
	cout << kain << endl;

	cin.get();
	return 0;
}