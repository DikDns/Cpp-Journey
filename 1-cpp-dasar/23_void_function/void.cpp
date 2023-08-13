#include <iostream>
using namespace std;
/*
	Tipe data void
*/

// Reporter
float kuadrat(float x){
	float y;
	y = x * x;
	return y;
}

// Worker
void ta(){
	cout << "Menampilkan Pekerjaan Void\n";
}

int main(int argc, char const *argv[])
{
	float a, b, c, x, y, h1, h2;

	ta(); // Penampilan Void!!! langsung masukin name void nya aja!!!

	cout << "Input : ";
	cin >> x;

	cout << "Hasil dari kuadrat "<< x << " = " << kuadrat(x) << endl;

	cin.get();
	return 0;
}