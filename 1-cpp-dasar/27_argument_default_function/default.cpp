#include <iostream>
using namespace std;

// Bisa memasukan nilai default pada argument function!!!
double volume(double p = 1,double l = 1,double t = 1){
	return p*l*t;
}

int main()
{
	cout << "Volume Kubus : " << volume(2,8,10) << endl;
	cout << "Volume Kubus : " << volume(2,8,) << endl;
	cout << "Volume Kubus : " << volume(2,) << endl;
	cout << "Volume Kubus : " << volume() << endl;
	cin.get();
	return 0;
}