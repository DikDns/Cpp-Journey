#include <iostream>
using namespace std;


void fungsi(int &);
void kuadrat(int &);

int main(){

	int a = 8;
	cout << "  Nilai a : " << a << endl;
	cout << "Address a :" << &a << endl;
	kuadrat(a);
	cout << "Kuadrat a : " << a << endl;

	fungsi(a);


	cin.get();
	return 0;
}

void fungsi(int &b){
	cout << "Address b " << &b << endl;
	cout << "  Nilai b " << b << endl << endl;
}

void kuadrat(int &b){
	b = b * b;
}