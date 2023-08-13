#include <iostream>
#include <string>
using namespace std;

int main()
{

	// char kata[5] = {'m','o','b','i','l'};
	// array char tidak bisa kita tambah kalau mau paragraf, fix karena array!
	cout << "Contoh String di Console : ";
	
	string kata("mobil");

	cout << kata << endl;
	cout << endl;

	string data;
	cout << "Masukan kata : "; // string tidak bisa men-input (spasi) harus pakai pluggin stream in & out!
	cin >> data;
	cout << endl;

	cout << "Kata yang di input : " << data << endl;
	cin.get();
	return 0;
}