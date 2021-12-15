/*
    Operators String
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    cout << "\n=======|  Mulai  |=======\n\n";

    string varAndika, varEka, varKurnia;
    varAndika = "Andika";
    cout << varAndika << endl << endl;

    // String adalah Array Char maka bisa akses index nya!\
    //* Menampilkan Index suatu string
    cout << "index ke-0 | " << varAndika[0] << endl;
    cout << "index ke-1 | " << varAndika[1] << endl;
    cout << "index ke-2 | " << varAndika[2] << endl;
    cout << "index ke-5 | " << varAndika[5] << endl;
    cout << endl;

    /*************************************
        Mengubah String
    **************************************/

    // Assignment Char
    varAndika[0] = 0;   //* Menghilangkan Char
    varAndika[1] = 0;
    varAndika[2] = 'D';
    //* Menamplkan Dika
    cout << varAndika << endl << endl;

    // Asignment String
    varAndika = "Akidna";
    varEka = "Eka";
    varKurnia = "Kurnia";
    //* Menamplkan Akidna
    cout << varAndika << endl << endl;
   
    varAndika = "Andika";
    cout << varAndika << varEka << varKurnia << endl << endl;

    /*************************************
        Menyambung String (Concatenation)
    **************************************/
    // Dengan Function append() di std library string
    varAndika.append(varEka);
    varAndika.append(varKurnia);
    cout << varAndika << endl << endl;

    // Dengan +,  += 
    cout << "AinrukAkeAkidna | " + varAndika << endl << endl;

    varAndika = "Andika";

    varAndika += " " + varEka + " " + varKurnia;

    cout << varAndika << endl << endl;

    
    

    cout << "\n=======| Selesai |=======\n\n";

    cin.get();
    return 0;
}