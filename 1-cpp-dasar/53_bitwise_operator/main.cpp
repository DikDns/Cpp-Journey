#include <iostream>
#include <string>
#include <bitset>
using namespace std;
/* 
	Bitwise angka yg diubah dalam bit cara perhitungannya:
	misal bitset<8>(a = 5);

	angka diconsole : 00000101 (Yang 0 tidak dihitung)

	itu angka dari kiri kanan : dipangkatkan^0,1,2,3,4,5,6,7

	karena tipe data short : 2 bit
	jadi :

	2^0 = 1
	2^2 = 4

	1+4 = 5 = a
*/

void PrntBinary(unsigned short val, string name);

int main()
{
	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n& - Bitwise AND" << endl;
	c = a & b;
	PrntBinary(a,"a");
	PrntBinary(b,"b");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cout << "\n| - Bitwise OR" << endl;
	c = a | b;
	PrntBinary(a,"a");
	PrntBinary(b,"b");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cout << "\n^ - Bitwise XOR" << endl;  // Inget sistem redstone on/off LBever di minecraft!!!
	c = a ^ b;
	PrntBinary(a,"a");
	PrntBinary(b,"b");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cout << "\n~ - Bitwise NOT" << endl; // kebalikan dari 1 jadi 0 dari 0 jadi 1
	c = ~a ;
	PrntBinary(a,"a");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cout << "\n<< - Bitwise SHL" << endl;
	c = a << 2;   // Menggeser ke kiri dua kali!
	PrntBinary(a,"a");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cout << "\n>> - Bitwise SHR" << endl;
	c = a >> 3;   // Menggeser ke kanan tiga kali! akan masuk ke address yang baru
	PrntBinary(a,"a");
	PrntBinary(c,"c");
	cout << "c: " << c << endl;

	cin.get();
	return 0;
}

void PrntBinary(unsigned short val, string name)
{
	cout << name << " : " << bitset<8>(val) << endl;

}

// Bitwise Operator
/* 
 &   AND Bitwise and
 |   OR  Bitwise exclusive or
 ^   XOR Bitwise exclusive or
 ~   NOT
 <<  SHL Shift bits left
 >>  SHR Shift bits right
*/