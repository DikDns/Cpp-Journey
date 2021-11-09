#include <iostream>
using namespace std;

int main()
{

	int a = 2;

	cout << "  Nilai dari a : " << a << endl;
	cout << "Address dari a : " << &a << endl << endl;

	//Reference = Menunjuk pada alamat yang sama
	int &b = a;

	cout << "  Nilai dari b : " << b << endl;
	cout << "Address dari b : " << &b << endl << endl;

	b += 4;

	cout << "  Nilai dari b : " << b << endl;
	cout << "Address dari b : " << &b << endl << endl;



	
	cin.get();
	return 0;
}