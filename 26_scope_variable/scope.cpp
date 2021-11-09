#include <iostream>
using namespace std;
/*
	Scope Tipe Data Global, Local, Block;
*/

int x = 1; // Global

int take(){
	return x;
}

int main()
{
	cout << "1) Variabel global : " << x << endl;

	int x = 2; // Main Local

	cout << "2) Variabel local main : " << x << endl;
	cout << "3) Variabel global menggunakan function : " << take() << endl;
	
	{
		int x = 3; // Local Break; Bisa juga if();while();dsb.
		cout << "4) Variabel break : " << x << endl;
	}

	cout << "5) Variabel local main : " << x << endl;

	
	cin.get();
	return 0;
}