#include <iostream>
using namespace std;
/*
	While(Syarat) { Statement }
	Statement tidak akan muncul bila syarat tidak terpenuhi.
*/

int main()
{
	int a = 5;

	while(a <= 15){
		cout << "Berhasil! ";
		cout << a << endl;
		a++;                   // atau a += 1
	}


	return 0;
}