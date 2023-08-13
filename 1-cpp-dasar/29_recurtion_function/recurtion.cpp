#include <iostream>
using namespace std;

int pangkatiterasi(int a,int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}
/*
	Rekursif = Pengulangan Fungsi; 
	Supaya tidak Infinite Recurtion, dibuat Finite Recurtion!!
*/
int pangkatrekursif(int a,int b){
	if(b <= 1){
		return a;
	}else{
		return a * pangkatrekursif(a,(b-1));
	}
}

int main(){
	int a,b;
	cout << "Input : ";
	cin >> a;
	cout << "Pangkat :";
	cin >> b;

	cout << "Hasil Iterasi : " << pangkatiterasi(a,b) << endl;
	cout << endl;
	cout << "Hasil Rekursif : " << pangkatrekursif(a,b) << endl;



	
	cin.get();
	return 0;
}