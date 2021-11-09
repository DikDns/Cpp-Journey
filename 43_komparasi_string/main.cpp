#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Perbandingan String !!!

	string nama_rahasia("liya");
	string input;

	while(true)
	{
		cout << "Tebak nama : ";
		cin >> input;
		cout << endl;
		cout << input << " > ";

		if(input == nama_rahasia)
		{
			cout << "Tebakan anda benar!\n" << endl;
			break;
		}

		cout << "Tebakan anda salah!\n" << endl;
	}

	cin.get();
	cin.get();
	return 0;
}