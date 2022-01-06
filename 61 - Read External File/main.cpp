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

    string output, buffer, name;
    ifstream myFile;
    int count, no;

    /*
        ios::in     =>  dari awal
        ios::ate    =>  dari akhir
        ios::binary =>  file binary
    */

    myFile.open("data-1.txt");

    while (true){
        getline(myFile, buffer);
        output.append("\n" + buffer);
        if (buffer == "data"){
            break;
        }
    }
    cout << output << endl;

    getline(myFile, buffer);
    cout << buffer << endl;
    while(!myFile.eof()){
        myFile >> no;
        myFile >> name;

        cout << no << "\t" << name << endl;
        count++;
    }

    cout << "Jumlah Data: " << count << endl;;

    myFile.close();

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}