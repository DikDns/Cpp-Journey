#include <iostream>
using namespace std;

int main(){
    // untuk penyimpanan input user ke-n
    int n;
    
    cout << "\n\n========|  START  |========\n\n";

    // Ambil Input
    cout << "Input : ";
    cin >> n;

    cout << "\n\n========|         |========\n\n";

    // Pola Segitiga Sama Kaki I
    for(int i = 1; i <= n; i++){
        // Looping untuk spasi dengan j = input user; batas nya i
        for (int j = n; j > i; j--){
            cout << " ";
        }

        // Looping untuk * dengan batas pola bilangan ganjil
        for (int j = 1; j <= (2*i - 1); j++){
            cout << "*";
        }

        cout << "\n";
    }

    cout << "\n\n========|         |========\n\n";\

    // Pola Segitiga Sama Kaki II
    for(int i = 1; i <= n; i++){
        // Looping untuk spasi dengan j = input user; batas nya i
        for (int j = 1; j < i; j++){
            cout << " ";
        }

        // Looping untuk * dengan batas pola bilangan ganjil
        for (int j = n; j >= (2*i - n); j--){
            cout << "*";
        }

        cout << "\n";
    }



    cout << "\n\n========|         |========\n\n";



    cout << "\n\n========|   END   |========\n\n";
    cin.get();
    return 0;
}