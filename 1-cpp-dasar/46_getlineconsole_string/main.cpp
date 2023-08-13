#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input_kalimat;

	// mengambil string dari manapun(console, external file) menggunakan getline(sumber, variabel); yang merupakan std iostream!
	cout << "Input: ";
	getline(cin,input_kalimat);
	cout << endl;
	cout << "Input yang di masukan: \n" << input_kalimat << endl;

	// menghitung jumlah kata yg di input user!

	int posisi = 0, jumlah = 0;

	while(true)
	{
		posisi = input_kalimat.find(" ",posisi + 1); // menghitung spasi dengan menambahkan variabel posisi dengan 1 untuk mencari substring selanjutnya!
		jumlah++; // menghitung kata
		if(posisi < 0) // ketika si find() mencapai akhir ia akan kembali ke awal yang berarti < 0
		{
			break;
		}
	}

	cout << "Jumlah kata yang diinput: " << jumlah << endl;

	cin.get();
	return 0;
}