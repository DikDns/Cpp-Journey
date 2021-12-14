/*
    Standard Library Multidimensional Array
*/
#include <iostream>
#include <array>

using namespace std;

const int baris = 2;
const int kolom = 5;

// Function Cara Keren
// void printArray(int *array, int baris, int kolom){
//     int index = 0;
//     for (int i = 0; i < baris; i++){
//         cout << "[ ";
//         for (int j = 0; j < kolom; j++){
//             // Ngambilnya dari pola memory array dengan byte integer
//             cout << *(array + index) << " ";
//             index++;
//         }
//         cout << "]\n";
//     }
// };

void printArray(array< array<int, kolom> , baris> &arrayInput){
    for(array<int, kolom> vectorBaris : arrayInput){
        cout << "[ ";
        for(int index : vectorBaris){
            cout << index << " ";
        }
        cout << "]" << endl;
    }
}

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Cara Membuat Array Multidimensi dari Standard Library
    array< array<int, kolom> , baris> numbers = {1,2,3,4,5,6,7,8,9,10};

    printArray(numbers);


    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}