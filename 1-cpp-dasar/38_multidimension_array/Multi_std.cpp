#include <iostream>
#include <array>

using namespace std;

const int baris = 3, kolom = 3;

void printArray(array <array <int,kolom>, baris> nilaiArray)
{
	for(array <int,kolom> vectorBaris : nilaiArray)
	{
		cout << "[ ";
		for(int nilaiKolom : vectorBaris)
		{
			cout << nilaiKolom << " ";
		}
		cout << "]" << endl;
	}
}

int main()
{

	// Array Multidimensi untuk perhitungan matrix(?)

	array <array <int,kolom>, baris> nilaiMD = {1,2,3,4,5,6,7,8,9};

	printArray(nilaiMD);
	cin.get();
	return 0;
}