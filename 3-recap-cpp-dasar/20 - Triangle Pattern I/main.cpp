#include <iostream>
using namespace std;

int main(){
    // untuk penyimpanan input user ke-n
    int n;
    
    cout << "\n\n========|  START  |========\n\n";

    // Ambil Input
    cout << "Input : ";
    cin >> n;
    cout << endl;

    // Pola Segitiga Siku-Siku I
    for (int i = 1; i <= n; i++){
        // Looping sesuai baris nya misal: baris ke-3 maka looping 3 kali
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // Habis satu baris langsung endl
        cout << "\n";
    }

    cout << "\n\n========|         |========\n\n";

    // Pola Segitiga Siku-Siku II
    for (int i = 1; i <= n; i++){
        // Looping dari suku ke-n sesuai i nya misal: ketika n = 3 maka looping 3 kali karena batasnya masih 1
        for (int j = n; j >= i; j--){
            cout << "*";
        }
        // Habis satu baris langsung endl
        cout << "\n";
    }

    cout << "\n\n========|         |========\n\n";

    // Pola Segitiga Siku-Siku III
    for (int i = 1; i <= n; i++){
        // Looping Pola II tapi -1 sama cout spasi
        for (int j = n; j > i; j--){
            cout << " ";
        }
        // Looping pola I 
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // Habis satu baris langsung endl
        cout << "\n";
    }

    cout << "\n\n========|         |========\n\n";
    
    // Pola Segitiga Siku-Siku IV
    for (int i = 1; i <= n; i++){
        // Looping Pola I tapi -1 sama cout spasi
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        // Looping pola I 
        for (int j = n; j >= i; j--){
            cout << "*";
        }
        // Habis satu baris langsung endl
        cout << "\n";
    }



    cout << "\n\n========|   END   |========\n\n";
    cin.get();
    return 0;
}