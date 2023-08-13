#include <iostream>
using namespace std;
/*
    Aritmatika Yeay!
*/
int main(int argc, char const *argv[]){

	int a = 4;
	int b = 3;
	int hasil;

	//Penjumlahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;

	//Pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	//Perkalian
	hasil = a * b;
	cout << a << " X " << b << " = " << hasil << endl;

	//Pembagian
	hasil = a / b; //Harus salah satu float tipe data nya kalau mau muncul desimalnya.
	cout << a << " / " << b << " = " << hasil << endl;

    //Modulus
    hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;

	//Campuran
    hasil = (b - a) * b;
	cout << "(3 - 4) X 3 = "<< hasil << endl;

	cin.get();
	return 0;
}
