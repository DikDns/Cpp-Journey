#include <iostream>
using namespace std;


int main(){

	// Looping(Khusus untuk array) di C++11 keatas!!!
	/*
		for(declaration : array){
			Statement;
		}
	*/
	int arrayNilai[10] = {1,2,3,4,5,6,7,8,9,0};

	for(int nilai : arrayNilai){
		cout << "Address " << &nilai << " Nilai " << nilai << endl;
		nilai *= 1; // Tidak bisa di manipulasi!!!
	}
	cout << endl;
	// Memanipulasi array dengan menggunakan referencing.

	for(int &nilaiRef : arrayNilai){
		nilaiRef *= 2;
		cout << "Address " << &nilaiRef << " Nilai " << nilaiRef << endl;
	}
	cout << endl;
	// Nilai nya tetep akan berubah.

	for(int &nilaiRef : arrayNilai){
		cout << "Address " << &nilaiRef << " Nilai " << nilaiRef << endl;
	}

	cin.get();
	return 0;
}
