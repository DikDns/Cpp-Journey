#include <iostream>
using namespace std;

// Unions, mengumpulkan tipe tipe data menjadi satu alamat block dan bisa di ubah semuanya sekaligus seperti string
// Unions, bisa mengubah suatu tipe data dalam nilai yg sama
// Dipake? jarang haha!!!
	
union data
{
	int int_value;
	char char_value[4];
	unsigned int unsignedint_value; // untuk pembuktian bahwa mereka berhubungan satu sama lain!!!
};


int main()
{
	data x;
	x.unsignedint_value;
	x.int_value = 12345678;

	cout << "data int_value: " << x.int_value << endl;
	cout << "data char_value: " << x.char_value << endl;

	x.char_value[0] = 'a';
	x.char_value[1] = 'b';
	x.char_value[2] = 'c';
	x.char_value[3] = 'd';

	cout << "data int_value: " << x.int_value << endl;
	cout << "data char_value: " << x.char_value << endl;
	cout << "data unsignedint_value: " << x.unsignedint_value << endl;

	return 0;
}