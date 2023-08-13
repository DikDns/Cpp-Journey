#include <iostream>
/* 
	Tanda kress/hashtags (#) adalah segala sesuatu yg di proses
 	sebelum masuk ke compiler. Disebut preprocessing directive!
 	mereka tidak ada hubungannya dengan memory!
*/

// Macro
#define PI 3.14159265359	// ini literal, tidak akan di input di dalam memory dan tidak akan ada addressnya!

using namespace std;

int main()
{
	double pi = 3.14159265359;

	cout << "	Nilai pi(double):" << pi << endl;
	cout << &pi << endl;
	cout << "	Nilai PI(Macro):" << PI << endl; // sama dengan menulis cout << "	Nilai PI(Macro):" << 3.14159265359 << endl;
	cin.get();
	return 0;
}