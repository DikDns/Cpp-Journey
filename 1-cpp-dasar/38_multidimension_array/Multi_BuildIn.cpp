#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printArray(int *ptrArray, int baris, int kolom);

int main()
{
	// Array Multidimensi
	// array[Baris][Kolom]

	const int baris = 3;
	const int kolom = 3;
	// Karena harus constant biar tidak runtime error jadi menggunakan const
	int array[baris][kolom] = {1,2,3,4,5,6,7,8,9};

	printArray(*array, 3, 3);

	cin.get();
	return 0;
}

void printArray(int *ptrArray, int baris, int kolom)
{
	int index = 0;

	for(int i = 0; i < baris; i++)
	{
		for(int j = 0; j < kolom; j++)
		{
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << endl;
	}
}