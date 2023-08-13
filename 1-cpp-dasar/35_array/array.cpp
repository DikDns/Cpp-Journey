#include <iostream>
#include <array>
// Std Array banyak di google build in nya!!!
// ada juga library algorithm untuk searching sorting dll array!
//#include <algorithm>

using namespace std;


int main()
{
	//Std array adalah agar bisa sort in dll.
	// std::array<int, jumlah array> nama array;
	array <int, 5> nilai;

	for(int i = 0; i <= 4; i++){
		i = nilai[i];
		cout << "Nilai [" << i << "] = " << nilai[i];
		cout << "Address : " << &nilai[i] << endl;
	}
	cout << endl;
	nilai[3] = 5;
	// Mencari jumlah array
	cout << "Jumlah : " << nilai.size() << endl;
	// Mencari Alamat awal array
	cout << "Address awal : " << nilai.begin() << endl;
	// Mencari Alamat akhir array
	cout << "Address akhir : " << nilai.end() << endl;
	// Mencari salah satu nilai atau nilai dengan index
	cout << "Nilai ke 3 : " << nilai.at(3) << endl;
	
	cin.get();
	return 0;
}