#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;


	// Postincrement
	a = 3;
	cout << a << endl;
	cout << a++ << endl; // Disini dia print dulu yang originalnya baru di increment!
	cout << a << "\n" << endl;

	// Preincrement
	b = 3;
	cout << b << endl;
	cout << ++b << endl;
	cout << b << "\n" << endl;

	// Postdecrement
	c = 3;
	cout << c << endl;
	cout << c-- << endl; // Disini dia print dulu yang originalnya baru di increment!
	cout << c << "\n" << endl;

	// Predecrement
	d = 3;
	cout << d << endl;
	cout << --d << endl;
	cout << d << "\n" << endl;

	cin.get();
	return 0;
}