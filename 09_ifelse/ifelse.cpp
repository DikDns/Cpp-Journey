#include <iostream>
using namespace std;
/*
    Pakai if else kalau mau tampil satu - satu integernya atau boleannya
*/
int main(){
	int a;
	cout << "Input number : ";
	cin >> a;

	if (a == 5){
		cout << "Ini adalah 5." << endl;
	} else if (a == 3){
		cout << "Ini adalah 3." << endl;
	} else if (a == 1){
		cout << "Ini adalah 1." << endl;
	} else {
		cout << "Ini bukan 1, 3 dan 5." << endl;
	}

	cin.get();
	return 0;
}
#include <iostream>
