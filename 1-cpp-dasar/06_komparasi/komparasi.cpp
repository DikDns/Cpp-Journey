#include <iostream>
using namespace std;
/*
   Pengenalan Komparasi / Relation Expression
    True = 1 
    False = 0
*/
int main(){

	int a = 4;
	int b = 2;

	bool h1, h2, h3, h4, h5, h6;

	// Sebanding
	h1 = (a == b);
	// Tidak Sebanding
	h2 = (a != b);

	// Kurang dari
	h3 = (a < b);
	// Lebih dari
	h4 = (a > b);

	// Kurang dari sama dengan 
	h5 = (a <= b);
	// Lebih dari sama dengan 
	h6 = (a >= b);
	
	cout << "Sebanding " << h1 << endl;
	cout << "Tidak Sebanding " << h2 << endl;
	cout << "Kurang dari " << h3 << endl;
	cout << "Lebih dari " << h4 << endl;
	cout << "Kurang dari sama dengan " << h5 << endl;
	cout << "lebih dari sama dengan " << h6 << endl;
	
	return 0;
}
