#include <iostream>
using namespace std;

int main()
{
	// typedef adalah memberikan alias untuk tipe data berguna untuk yang panjang - panjang!

	typedef int B_bulat;
	typedef int iVector2D[2];
	typedef long unlong;
	typedef double vector[2];

	using numbers = double;

	B_bulat a = 10;
	iVector2D b = {1,2};
	unlong c = 98765434523211;
	vector d = {19.230, 13.123};
	numbers e = 0.212412313f;

	cout << "Nilai a: " << a << endl;
	cout << "Nilai b: " << b[0] << " dan " << b[1] << endl;
	cout << "Nilai c: " << c << endl;
	cout << "Nilai d: " << d[0] << " dan " << b[1] << endl;
	cout << "Nilai e: " << e << endl;

	cin.get();
	return 0;
}