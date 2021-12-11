/*
    Looping an Array
*/
#include <iostream>
using namespace std;

int main() {
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Looping Array C++11 ke atas
    /*
        for(deklarasi variable : array){
            statement
        }
    */

    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int i : numbers){
        cout << " Address " << &i << " -> " << numbers[i] << endl;
        i += 2; // statement tidak akan berpengaruh karena address konstan & khusus
    }
    cout << endl;

    // memanipulasi nilai array dengan looping dan referencing
    for (int &i : numbers){
        i++;
    }
    cout << endl;

    // mengecek apakah nilai berubah atau tidak
    for (int &i : numbers){
        cout << " Address " << &i << " -> " << numbers[i] << endl;
    }

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}