#include <iostream>
using namespace std;

int main()
{	
	int n;

	cout << "\nInput :";
	cin >> n;

	// Pola Segitiga Siku Siku kiri bawah.

	cout << "\nPola 1 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "x";
		
		}
		cout << endl;
	}

	// Pola Segitiga Siku Siku kiri atas.

	cout << "\nPola 2 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= i; j--){
			cout << "x";
		
		}
		cout << endl;
	}

	// Pola Segitiga Siku Siku kanan atas.

	cout << "\nPola 3 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int j = n; j >= i; j--){
			cout << "x";
		}
		cout << endl;
	}
	
	// Pola Segitiga Siku Siku kanan bawah.

	cout << "\nPola 4 :" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n - 1; j >= i; j--){
			cout << " ";
		}
		for (int j = 1; j <= i; j++){
			cout << "x";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}