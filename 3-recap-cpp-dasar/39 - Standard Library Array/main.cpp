/*
    Array Standard Library

    ukuran from library
        .size()
*/
#include <iostream>
#include <array>

using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Bikin Array Numbers
    array<int, 5> numbers;

    // Ukuran Panjang dari array Numbers
    // int length = (sizeof(numbers)/sizeof(int));

    for( int i = 0; i < numbers.size(); i++){
        // selipin nilai index ke nilai array numbers
        numbers[i] = i;

        // print nilai tersebut
        cout << &numbers[i];
        cout << " | numbers[" << i << "] = " << numbers[i] << endl;
    }
    cout << endl;

    /*****************************************************************************************
     * Functions Built-in
    *****************************************************************************************/

    // mengambil nilainya
    cout << "numbers[2]             :   " << numbers.at(2) << endl; // sama kek numbers[2]
    // ukuran array
    cout << "Ukuran array numbers   :   " << numbers.size() << endl;
    // address awal
    cout << "Address Awal           :   " << numbers.begin() << endl;
    // address akhir
    cout << "Address Akhir          :   " << numbers.end() << endl;

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}