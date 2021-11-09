#include <iostream>
using namespace std;
/*
    Pakai switch case kalau mau tampil urutan integernya
*/
int main(){
	int a;
	cout << "Input number : ";
	cin >> a;

    switch(a){
    	case 1:
    		cout << "a = 1" << endl;
    		break;
    	case 2:
    		cout << "a = 2" << endl;
    		break; //Untuk meloncat agar case dibawahnya tidak di eksekusi
    	case 3:
    		cout << "a = 3" << endl;
    	case 4:
    		cout << "a = 4" << endl;
    	case 5:
    		cout << "a = 5" << endl;
    	default:
    		cout << "default" << endl;
    }

    cout << "Akhir Program..." << endl;
	cin.get();
	cin.get();
	return 0;
}
#include <iostream>
