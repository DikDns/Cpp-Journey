#include <iostream>

// Pengenalan Printing pada Console.

int main()
{
	std::cout << "Ini Baris Awal." << std::endl;                         // Penulisan Biasa.
    std::cout << "Ini Baris Kedua.\n";                                   // Pengakhiran baris menggunakan backslash newline (\n) 
    std::cout << "Ini Baris Ketiga.\n" << "Akhir Baris..." << std::endl; // Gabungan menjadi dua baris.

	std::cin.get();
	return 0;
	
	// Jangan Lupa akhir di akhir statement pake titik koma(;)
}