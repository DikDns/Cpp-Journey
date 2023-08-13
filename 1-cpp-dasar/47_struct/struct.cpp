#include <iostream>
#include <string>
using namespace std;

// structur adalah data yang dibentuk dari beberapa data!
// struct nama { kumpulan data };

struct murid
{
	int jumlah;
	int lulus;
	int gagal;
	string deskripsi;
};



int main()
{
	murid a;
	a.jumlah = 34;
	a.lulus = 30;
	a.gagal = (a.jumlah - a.lulus);
	a.deskripsi = "Luar biasa ya kalian!";

	cout << "Murid kelas A \n";
	cout << "Jumlah   : " << a.jumlah << endl;
	cout << "Lulus    : " << a.lulus << endl;
	cout << "Gagal    : " << a.gagal << endl;
	cout << "Deskripsi: " << a.deskripsi << endl;

	cout << endl;

	murid b;
	b.jumlah = 24;
	b.lulus = 9;
	b.gagal = (b.jumlah - b.lulus);
	b.deskripsi = "Anjim banget!!!";

	cout << "Murid kelas B \n";
	cout << "Jumlah   : " << b.jumlah << endl;
	cout << "Lulus    : " << b.lulus << endl;
	cout << "Gagal    : " << b.gagal << endl;
	cout << "Deskripsi: " << b.deskripsi << endl;
	
	cin.get();
	return 0;
}