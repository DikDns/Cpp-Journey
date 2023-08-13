#include <iostream>
#include <string>

using namespace std;

// Membuat struct didalam struct yang biasanya sudah fix const

struct aktor
{
	string nama;
	int th_lahir;
};

struct film
{
	string judul;
	string genre;
	int tahun;
	//struct aktor
	aktor role_1;
	aktor role_2;
};

 int main()
 {
 	aktor aktor1, aktor2;
 	film film1, film2;

 	// Membuat aktor pertama
 	aktor1.nama = "John Sphinx";
 	aktor1.th_lahir = 1994;

 	// Membuat aktor kedua
 	aktor2.nama = "Harry Potter";
 	aktor2.th_lahir = 1799;


 	film1.judul = "Fantastic Humans";
 	film1.genre = "Sci-Fi";
 	film1.tahun = 2020;
 	film1.role_1 = aktor1;
 	film1.role_2 = aktor2;

 	film2.judul = "No One!?!";
 	film2.genre = "Psychological";
 	film2.tahun = 2017;
 	film2.role_1 = aktor2;

 	cout << film1.judul << " - " << film1.genre << " - " << film1.tahun << endl;
 	cout << film1.role_1.nama << " - " << film1.role_1.th_lahir << endl;
 	cout << film1.role_2.nama << " - " << film1.role_2.th_lahir << endl << endl;

 	cout << film2.judul << " - " << film2.genre << " - " << film2.tahun << endl;
 	cout << film2.role_1.nama << " - " << film2.role_1.th_lahir << endl;

 	return 0;
 }
