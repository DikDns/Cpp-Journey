#include <iostream>
#include <fstream>
using namespace std;

/*
	ofstream  Output dari file external
	ifstream  Input  dari file external
	fstream   Gabungan keduannya
*/

int main()
{
	ofstream myFile;
	/*
		ios::out   =  defaultnya, operasi output atau di overwrite
		ios::app   =  menuliskan atau menambahkan sesuatu di barisnya / tidak akan di overwrite
		ios::trunc =  defaultnya, membuat file baru jika tidak ada dan jika ada di timpa / overwrite juga
	*/

	myFile.open("data3.txt", ios::app);   //  append bukan application
	myFile << "\nMenambahkan sesuatu pada data3!\n";
	myFile.close();

	myFile.open("data2.txt", ios::trunc);
	myFile << "\nMenambahkan sesuatu pada data2!\n";
	myFile.close();

	myFile.open("data1.txt", ios::out);
	myFile << "\nMenambahkan sesuatu pada data1!\n";
	myFile.close();


	cin.get();
	return 0;
}