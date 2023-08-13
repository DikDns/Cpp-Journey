#include <iostream>
#include <string>
#include <typeinfo>	// std mendalam tentang tipe data

using namespace std;

template<typename T, typename U>
auto max(T a, U b)
{
	return ((a > b) ? a : b);
}


int main()
{
	// auto, otomatis mendeteksi tipe datanya

	int a = 5;
	auto b = "strings";	// bisa gini
	double c = 15.331f;
	float d = 2.560f;
	auto e = max(a,c);

	cout << a << "\tof Datatype: " << typeid(a).name() << endl;
	cout << b << "\tof Datatype: " << typeid(b).name() << endl;
	cout << c << "\tof Datatype: " << typeid(c).name() << endl;
	cout << d << "\tof Datatype: " << typeid(d).name() << endl;		
	cout << e << "\tof Datatype: " << typeid(e).name() << endl;	
	
	return 0;
	}
