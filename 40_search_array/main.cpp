#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka)
{
	std::cout << "Array : ";
	for(int &a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &huruf)
{
	std::cout << "Array : ";
	for(char &a : huruf)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::array<int, arraySize> angka = {8,1,6,2,9,4,7,3,5,0};
	printArray(angka);

	int angkaCari;
	bool ketemu;

	std::cout << "Mencari angka dalam array diatas \n";
	std::cin >> angkaCari;

	// Sort dulu
	// Search ---> binary_search

	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if(ketemu)
	{
		std::cout << "Ketemu!\n";
	} else {
		std::cout << "tidak ketemu!\n";
	}
	
	std::cin.get();
	return 0;
}