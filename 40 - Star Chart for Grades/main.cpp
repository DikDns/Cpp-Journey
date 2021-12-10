/*
    Star Chart Grade Simple Program with Aray
*/
#include <iostream>
#include <array>

using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    // Storage untuk inputan user
    array<int, 5> grades;

    cout << "\n=====| Chart Grade |=====\n\n";

    for( int i = 0; i < grades.size(); i++){
        // cout untuk nanya ke user
        cout << "Jumlah yang dapat nilai ";
        // tergantung looping
        if (i == 0){
            cout << "A : ";
        } else if (i == 1){
            cout << "B : ";
        } else if (i == 2){
            cout << "C : ";
        } else if (i == 3){
            cout << "D : ";
        } else if (i == 4){
            cout << "E : ";
        }
        // setelah milih di sesuai kondisi langsung minta input user
        cin >> grades[i];
    }
    cout << endl;

    // Looping untuk bikin star chart nya
    for( int i = 0; i < grades.size(); i++){
        if (i == 0){
            cout << "  | \n";
            cout << "A | ";
        } else if (i == 1){
            cout << "B | ";
        } else if (i == 2){
            cout << "C | ";
        } else if (i == 3){
            cout << "D | ";
        } else if (i == 4){
            cout << "E | ";
        }

        for(int j = 0; j < grades[i]; j++){
            cout << "*";
        }

        // Untuk endl sama bikin garis lagi di tabelnya
        cout << "\n  | \n";
    }
    cout << "__|__________________________________" << endl;


    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    cin.get();
    return 0;
}