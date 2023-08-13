/*
!   Enum
    untuk menyimpan range data yg fixed
*/
#include <iostream>

using namespace std;

enum warna {merah, hitam, kuning, biru = 6, coklat, hijau};

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    warna kain;

    kain = kuning;


    if (kain == kuning){
        cout << "warna kain kuning" << endl;
    }

    cout << biru << endl;


    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}