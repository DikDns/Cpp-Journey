#include <iostream>
using namespace std;
// Sebagai sarana hemat memory space (RAM)

void fungsi(int *x){
	*x = (*x) * (*x); //Jadi tidak usah menggunakan return; dan variabel lain lagi!!!
}

int main(){

	int a = 8;
	cout << "Nilai a : " << a << endl;

	fungsi(&a);
	cout << "Kuadrat a : " << a << endl; //Perhatkan!!!


	cin.get();
	return 0;
}