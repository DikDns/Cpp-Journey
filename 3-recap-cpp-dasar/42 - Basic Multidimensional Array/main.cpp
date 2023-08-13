/*
    Basic Multidimensional Array
*/
#include <iostream>
using namespace std;

// Function Cara Keren
void printArray(int *array, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++){
        cout << "[ ";
        for (int j = 0; j < kolom; j++){
            // Ngambilnya dari pola memory array dengan byte integer
            cout << *(array + index) << " ";
            index++;
        }
        cout << "]\n";
    }
};

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    const int baris = 2;
    const int kolom = 5;

    // Cara Membuat Array Multidimensi
    int numbers[baris][kolom] = {
        {1, 3, 5, 7, 9},
        {2, 4, 6, 8, 10}
    };

    printArray(*numbers, baris, kolom);

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}