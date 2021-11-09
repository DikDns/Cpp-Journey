#include <iostream>
#include <array>
using namespace std;



int main()
{
	
	// Welcome Teks
	cout << "O-------------------------------------O\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|------>    Selamat Datang     <------|\n";
	cout << "|---->   di Program Penampilan   <----|\n";
	cout << "|-------->   Grafik  Nilai   <--------|\n";
	cout << "|-------------------------------------|\n";
	cout << "|-------------------------------------|\n";
	cout << "| oleh @dikdns. <---------------------|\n";
	cout << "O-------------------------------------O\n\n\n";

	// Main Loop
	array <int, 11> nilai;
	for(int i; i <= 10; i++){
		cout << " Jumlah siswa dengan nilai ";
		if(i == 0){
			cout << "  0-9: ";
		}else if(i == 10){
			cout << "  100: ";
		}
		else{
			cout << i*10 << "-" << (i*10)+9 << ": ";
		}
		cin >> nilai[i];
	}

	for(int i = 0; i <= 10; i++){
		if(i == 0){
			cout << "  0-9|";
		}else if(i == 10){
			cout << "  100|";
		}
		else{
			cout << i*10 << "-" << (i*10)+9 << "|";
		}

		for(int b = 0; b < nilai[i]; b++){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
