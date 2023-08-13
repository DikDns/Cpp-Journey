#include <iostream>
using namespace std;

// overloading = Menimpa Fungsi

int volume(int p,int l,int t){
	return p*l*t;
}

int volume(int rusuk){
	return rusuk*rusuk*rusuk;
}

double volume(double rusuk){
	return rusuk*rusuk*rusuk;
}

int main()
{
	cout << "Volume Kubus : " << volume(2,8,10) << endl;
	cout << "Volume Kubus : " << volume(2) << endl;
	cout << "Volume Kubus : " << volume(2.9) << endl;
	cin.get();
	return 0;
}