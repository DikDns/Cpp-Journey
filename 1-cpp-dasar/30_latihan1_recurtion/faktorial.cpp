#include <iostream>
using namespace std;

double Aku(double n);

int main(){
	int n;
	cout << "Input : ";
	cin >> n;

	cout << "Hasil Faktorial : " << n << " : " << Aku(n) << endl;
	cin.get();
	return 0;
}

double Aku(double n){
	if(n <= 1){
		return n;
	}
	return n * factorial(n - 1);
}