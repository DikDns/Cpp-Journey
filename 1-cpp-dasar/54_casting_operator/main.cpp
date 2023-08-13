#include <iostream>
using namespace std;
/* 
		Casting Operator
		Merubah data ke tipe data yang lainnya

		HATI - HATI!
		Jika float di ubah ke int dan dibalikin lagi ke float koma nya akan hilang 
		karena di int sudah tidak ada koma 
*/
int main()
{
	int i = 5;
	float f = 6.71f;
	char c = 'a';

	cout << i + (int)f << endl; // mengubah float menjadi int hasilnya

	cout << (char)(c + i) << endl; // mengubah angka lima menjadi lompatan untuk huruf a sampai f

	cout << (int)c << " + " << i << endl; // memperlihatkan nilai char dalam angkanya

	cout << (int)(c + i) << endl; // mengubah char menjadi nilai angkanya dan ditambahkan i

	cin.get();
	return 0;
}