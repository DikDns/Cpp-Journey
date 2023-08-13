#include <iostream>
using namespace std;

	// fn = fn1 + fn2

int main()
{
	// Data Integer
	int n, fn, fn1, fn2;

	// Welcome Teks
	cout << "O-------------------------------------O\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|------>    Selamat Datang     <------|\n";
	cout << "|---->   di Program Pencarian    <----|\n";
	cout << "|-------->  Deret Fibonacci  <--------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "| oleh @dikdns. <---------------------|\n";
	cout << "O-------------------------------------O\n";

	// Input data user
	cout << "|-------------------------------------|\n";
	cout << "|------> Masukan nilai ke-n: ";
	cin >> n;
	cout << "|-------------------------------------|\n\n";

	// Main Program

	fn1 = 1;
	fn2 = 0;
	fn = fn1 + fn2;
	cout << "|------> " << fn << " ";

	for(int i = 1; i < n; i++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		cout << fn << " ";
	}

	cout << "\n" << endl;
	cin.get();cin.get();
	return 0;
}
