/*
    Comparison String
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    string input;
    char condition;

    cout << "Tebak-Tebakan yuks!" << endl;
    cout << "\nApa nama Ibu Kota Laos?\n" << endl;

    for(int i = 1; i <= 10; i++){
        cin >> input;

        if(input == "Vientiane" || input == "vientiane"){
            cout << "\nSelamat! Tebakan anda benar!" << endl;
            i = 10;
        } else if (i >= 10){
            cout << "Menyerah? (y)" << endl;
            cin >> condition;
            if(condition == 'y'){
                break;
            }  else {
                cout << "\nApa nama Ibu Kota Laos?\n" << endl;
                i = 0;
            }
        } else {
            cout << "\nTebakan anda salah, coba lagi!\n" << endl;
        }

    }


   
    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}