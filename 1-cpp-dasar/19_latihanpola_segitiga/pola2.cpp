#include <iostream>
using namespace std;



int main(){

	int n;

	cout << "\nInput :";
	cin >> n;

	// Pola Segitiga Sama kaki.

	cout << "\nPola 5 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n - 1; j >= i; j--){
			cout << " ";
		}
		for (int j = 1; j <= (2*i - 1); j++){
			cout << "x";
		}
		cout << endl;
	}

	// Pola Segitiga Sama kaki terbalik.

	cout << "\nPola 6 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int j = n; j >= (2*i - n); j--){
			cout << "x";
		}
		cout << endl;
	}

	// Pola belah ketupat.

	cout << "\nPola 7 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n - 1; j >= i; j--){
			cout << " ";
		}
		for (int j = 1; j <= (2*i - 1); j++){
			cout << "x";
		}
		cout << endl;
	}
	for(int i = 2; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int j = n; j >= (2*i - n); j--){
			cout << "x";
		}
		cout << endl;
	}



	return 0;
}