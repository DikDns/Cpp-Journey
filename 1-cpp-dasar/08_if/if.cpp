#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Input number : ";
	cin >> a;

	//Kondisi if dalam bentuk boolean.
	if (a == 12345){
		cout << "Correct!" << endl;
	}

    if (a != 12345){
		cout << "Incorrect!" << endl;
	}

	cin.get();
	return 0;
}
