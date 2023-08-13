#include <iostream>
#include <string>

using namespace std;

// Comma Operator (,) mengurutkan susunan instruksi bisa segala macam

void Pout(int val)
{
	cout << val << endl; 
}


int main()
{
	int a;
	int b;
	int c;

	a = (b=3 , Pout(b) , c = 7 , Pout(c) , (b+c)); // contoh comma operator

	cout << a << endl;


	cin.get();
	return 0;
}