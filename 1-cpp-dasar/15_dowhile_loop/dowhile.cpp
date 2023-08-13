#include <iostream>
using namespace std;
/*
	do{Statement}while(syarat);
	Statement muncul, minimal sekali baru syarat.
*/
int main()
{
	int a = 1;

	do{
		cout << "Berhasil ";
		cout << a << endl;
		a++;
	}while(a <= 20);


	cout << "\n Selesai !!!" << endl;
	cin.get();
	return 0;
}