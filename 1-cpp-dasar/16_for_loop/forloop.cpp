#include <iostream>
using namespace std;
/*
	for(inisialisasi; syarat loop; increment, coumpound)
	Inisialisasi hanya akan berlaku di dalamnya.
*/
int main()
{	
	cout << "\nLoop 1 :\n";
	for(int i = 1; i <= 10; i++){
		cout << i << endl;
	}

	cout << "\nLoop 2 :\n";
	for(int i = 1; i <= 10; i += 2){
		cout << i << endl;
	}

	cout << "\nLoop 3 :\n";
	for(int i = -1; i >= -10; i--){
		cout << i << endl;
	}

	cout << "\nLoop 4 :\n";
	int total = 0;
	for(int i = 1; i <= 10; i++, total += i){  //total += 1; dieksekusi setelah satu loop beres1
		cout << i << "||" << total << endl;
	}


	cin.get();
	return 0;
}