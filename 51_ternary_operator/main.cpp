#include <iostream>
#include <string>
using namespace std;

// Ternary operator adalah tanda tanya (?)
// Ternary sebanding dengan If statement cuman lebih simple
// (kondisi) ? hasil1 : hasil2
// kalau kondisi = true hasil1 = false hasil2

int main()
{
	string output, hasil1, hasil2;
	int a, b;

	hasil1 = "-> Sebanding";
	hasil2 = "-> Tidak Sebanding";

	while(true)
	{
		cout << "Input a: ";
		cin >> a;
		cout << "Input b: ";
		cin >> b;

		cout << endl;
		output = (a == b) ? hasil1 : hasil2;
		cout << output << endl;

		if(output == hasil1)
		{
			break;
		}
		cout << endl;
	}

	cin.get();
	return 0;
}