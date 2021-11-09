#include <iostream>
using namespace std;
/*
    - Pengenalan Deklarasi
    - 2 cara memasukan nilai ke variabel.
    - Membuat Program Penjumlahan.
*/
int main()
{
	
    int a;                     //Disebut Deklarasi.
    a = 1;                     // 1) Memasukan nilai langsung.
    cout << a << " ditambah []" << endl;
    
    int b;
    cout << "Masukan Nilai : ";
    cin >> b;                  // 2) Memasukan nilai di program menggunakan Console In(cin).
    
    cin.get();
    cout << "Hasil : ";        //Hasil penjumlahannya.
    cout << a + b << endl;

	cin.get();
	return 0;
}