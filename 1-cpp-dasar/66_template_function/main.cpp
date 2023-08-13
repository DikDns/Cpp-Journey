#include <iostream>
using namespace std;
// template membuat function bisa otomatis mendeteksi tipe data nya

template<typename T> // semua tipe data bisa masuk function print
void print(T data)
{
	cout << data << endl;
}

template<typename T> // disarankan tipe data integer bisa masuk function toInt
int toInt(T data)
{
	return int(data);
}

template<typename T, typename U>
T max(T a, U b)
{
	return ((a > b) ? a : b);
}

int main()
{
	print(5);
	print(5.5f);	// mengubah tipe data auto
	print('c');		// mengubah tipe data auto

	cout << toInt(10.2091301) << endl;	// kalau ga pake template mah ga bisa masuk functionnya
	cout << max(10,103.210f) << endl;

	print<double>(10.50f); // mengubah tipe data manual

	
	return 0;
}