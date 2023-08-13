#include <iostream>
using namespace std;
/*
   Operator Logika Digital
   not, and, or
*/
int main(){

	int a = 3;
	int b = 4;
	bool h; 

    // not : Kebalikannya
    h = !(a == 2);
    cout << "not:\n" << h << endl; // Jadi true(1)

    // and : kedua nilai benar untuk menghasilkan true
    cout << "and:\n";
    h = (a == 3) and (b == 4); // true and true
    cout << h << endl;
    h = (a == 3) && (b == 3); // true and false
    cout << h << endl;
    h = (a == 4) and (b == 4); // false and true
    cout << h << endl;
    h = (a == 4) && (b == 3); // false and false
    cout << h << endl;
   
    // or : salah satu nilai true maka true
    cout << "or:\n";
    h = (a == 3) or (b == 4); // true and true
    cout << h << endl;
    h = (a == 3) || (b == 3); // true and false
    cout << h << endl;
    h = (a == 4) or (b == 4); // false and true
    cout << h << endl;
    h = (a == 4) || (b == 3); // false and false
    cout << h << endl;

	return 0;
}
