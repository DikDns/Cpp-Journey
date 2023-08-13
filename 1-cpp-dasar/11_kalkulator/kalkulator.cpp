#include <iostream>

using namespace std;

int main(){
	//Input Data Fundamental
	float a,b,hasil;
	char aritmatika;

	//Main Teks
	cout << "O-------------------------------------O\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|------>    Selamat Datang     <------|\n";
	cout << "|---->  di Kalkulator Sederhana  <----|\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "| oleh @dikdns. <---------------------|\n";
	cout << "O-------------------------------------O\n" << endl;

	//Input data oleh user
	cout << "\n--->  Masukan nilai pertama: ";
	cin >> a;
	cout << "\n--->  Pilih operator +,-,*,/: ";
	cin >> aritmatika;
	cout << "\n--->  Masukan nilai kedua: ";
	cin >> b;
	cout << "\n\n" << endl;

	

	//Program Operasi Perhitungan
	if (aritmatika == '+')
	{
		hasil = a + b;
		cout << a << aritmatika << b << " = " << hasil; 
	} else if (aritmatika == '-'){
		hasil = a - b;
		cout << a << aritmatika << b << " = " << hasil; 
	} else if (aritmatika == '*'){
		hasil = a * b;		
		cout << a << aritmatika << b << " = " << hasil; 
	} else if (aritmatika == '/'){
		hasil = a / b;
		cout << a << aritmatika << b << " = " << hasil; 
	} else {
		cout << "     Input anda tidak memenuhi!     " << endl;
	}

	cout << "\n\n" << endl;
	cin.get();
	return 0;
}