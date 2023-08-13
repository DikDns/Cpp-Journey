#include <iostream>
using namespace std;
/*
   Tipe Data Fundamental

 */

int main(){

	//Bilangan Bulat
	int a = 1;          // 32-bit
	long b = 2;         // 64-bit
	short c = 3;        // 
	unsigned int d = 4; // Tanpa mines(-)

    //Bilangan Desimal
    float e = 5.0;
    double f = 6.2f;

    //Character
    char g = 'a'; //1-bit
    char i = 'ad';

    //Boolean
    bool h = true; //True or False
    

    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
	cin.get();
	return 0;
	
}