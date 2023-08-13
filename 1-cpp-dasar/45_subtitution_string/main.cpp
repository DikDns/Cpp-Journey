#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kalimat1("MOBIL terbang sebentar lagi direalisasikan!");
	string kalimat2("PESAWAT terbang sebentar lagi direalisasikan!");
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	cout << endl;

	// swap string menggunakan function swap();
	kalimat1.swap(kalimat2);
	cout << "Swap String :" << endl;
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	cout << endl;

	// replace string menggunakan function replace();
	kalimat1.replace(0,7,"AIPLANE");

	char p = kalimat2.find('!') - kalimat2.find(5);  // Mencari jumlah panjang index nya (gini nih kalau males ngitung hehe)

	kalimat2.replace(kalimat2.find("terbang"),p,"itu inggris nya adalah Car.");
	
	cout << "Replace String :" << endl;
	cout << "1: " << kalimat1 << endl;
	cout << "2: " << kalimat2 << endl;
	cout << endl;

	// insert string menggunakan function insert();
	kalimat1.insert(2,"R");
	kalimat2.insert(10,"bahasa ");
	cout << "Insert String :" << endl;
	cout << "1: " << kalimat1 << endl; // memasukan 'r' ditengah kata AI-PLANE
	cout << "2: " << kalimat2 << endl; // memasukan "bahasa " 
	cout << endl;

	return 0;
}