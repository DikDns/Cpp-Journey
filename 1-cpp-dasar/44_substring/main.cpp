#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kalimat1("Mobil terbang sebentar lagi direalisasikan!");
	string kalimat2("Motor terbang sebentar lagi direalisasikan!");

	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	cout << endl;

	// Substring, mengambil string di tengah-tengah index atau dimanapunnya!
	
	// Function nya :
	// substr(index,panjangnya);

	cout << "Substring 1: " << kalimat1.substr(0,22) << endl;
	cout << "Substring 2: " << kalimat2.substr(23,20) << endl;

	// Mencari posisi dari substring

	cout << "Posisi lagi: " << kalimat1.find("lagi") << endl;
	cout << "Posisi terbang: " << kalimat1.find("terbang") << endl;
	
	int a = kalimat1.find("a");
	cout << "Posisi a: " << a << endl;

	// Cara mencari a yang didepannya!
	// a pertama + a kedua = jadi mencari mulai dari a kedua dan menemukan a ketiga!

	cout << "Posisi a ke 3: " << kalimat1.find("a", a + 2) << endl; // Mencari a di substring kalimat1 "sebentar"

	// Mencari posisi yang mulai dari belakang string
	// Menggunakan function rfind()    resign
	cout << "Posisi a dari belakang: " << kalimat1.rfind('a') << endl;

	cout << endl;

	// Looping mencari 'a' di substring kalimat2 menggunakan for loop dan find() function string

	cout << "Looping mencari posisi a di kalimat2: " << endl;

	int b = kalimat2.find('a');

	for(int i = 1; i <= b; i++)
	{
		cout << "Posisi "<< i << " : " << b << endl;
		b = kalimat2.find("a", b + 1);

	}


	cin.get();
	return 0;
}