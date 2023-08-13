#include <iostream>
using namespace std;


float kuadrat(float x){
	float y;
	y = x * x;
	return y;
}

float tambah(float a, float b){
	float c;
	c = a + b;
	return c;
}


int main(int argc, char const *argv[])
{
	float a, b, c, x, y, h1, h2;

	cout << "Input : ";
	cin >> x;

	cout << "Hasil dari kuadrat "<< x << " = " << kuadrat(x) << endl;

	cout << "Input a : ";
	cin >> a;
	cout << "Input b : ";
	cin >> b;
	cout << "Hasil dari penjumlahan adalah " << tambah(a,b) << endl;



	cin.get();
	return 0;
}