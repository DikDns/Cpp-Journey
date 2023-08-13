#include <iostream>
#include <string> // Memudahkan operasi pada string !!!

using namespace std;

int main()
{	//Menampilkan data string
	cout << endl;
	cout << "Contoh String di Console : ";
	string kata("mobil");
	cout << kata << endl;
	cout << endl;

	//Mengambil char string berdasarkan index 
	cout << "Index ke 0 : " << kata[0] << endl;
	cout << "Index ke 1 : " << kata[1] << endl;
	cout << "Index ke 2 : " << kata[2] << endl;
	cout << "Index ke 3 : " << kata[3] << endl;
	cout << "Index ke 4 : " << kata[4] << endl;
	cout << endl;

	//Merubah char pada string
	kata[2] = 't'; 
	kata[3] = 'o';
	kata[4] = 'r';
	cout << "Contoh merubah string : " << kata << endl;
	cout << endl;


	//Menyambung(concatenation) string
	//Cara 1 :
	string kata2(kata + " terbang");
	cout << "Contoh menyambung string : " << kata2 << endl;
	cout << endl;

	//Cara 2 :
	string kata3("terbang");
	kata.append(" " + kata3);
	cout << "Contoh menyambung string : " << kata << endl;
	cout << endl;
	
	//Cara 3 :
	string kata4("emang ada?");
	kata += " " + kata4;
	cout << "Contoh menyambung string : " << kata << endl;


	return 0;
}