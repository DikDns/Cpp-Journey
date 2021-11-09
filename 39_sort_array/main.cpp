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
	std::array<int, arraySize> angka = {8,1,5,2,9,4,7,3,6,0};
	std::array<char, arraySize> huruf = {'b','d','c','a','f','e','g','h','i','j'};
	
	printArray(angka);
	printArray(huruf);

	std::cout << std::endl;
	
	std::sort(angka.begin(), angka.end()); //Sorting array 
	printArray(angka);

	std::sort(huruf.begin(), huruf.end());\
	printArray(huruf);

	
	std::cin.get();
	return 0;
}