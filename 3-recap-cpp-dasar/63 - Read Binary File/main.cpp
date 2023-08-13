/*
!   CRUD
*/
#include <iostream>
// fstream, ofstream, ifstream
#include <fstream>
#include <string>

using namespace std;

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    fstream myFile;
    int hasil;
    string hello;

    myFile.open("data.bin", ios::in | ios::binary);

    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

    myFile.close();

    cout << hasil << endl;

    // fstream myFile;
    // int number = 125;

    // myFile.open("data.bin", ios::out | ios::binary);

    // myFile.write(
    //     reinterpret_cast<char*>(&number),
    //     sizeof(number)
    // );

    // myFile.close();

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}


// fstream myFile;
// int number = 125;

// myFile.open("data.bin", ios::out | ios::binary);

// myFile.write(
//     reinterpret_cast<char*>(&number),
//     sizeof(number)
// );

// myFile << "\n Hello World!" << endl;

// myFile.close();