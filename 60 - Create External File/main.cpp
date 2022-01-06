/*
!   CRUD
*/
#include <iostream>
// fstream, ofstream, ifstream
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "\n=======|  Mulai  |=======\n\n";

    /*
        ios::out    =>  default, operasi output
        ios::app    =>  menuliskan pada baris akhir
        ios::trunc  =>  default, selalu membuat file bahkan jika ada maka akan ke overwrite

        ofstream.open( "(filename)", ios::? )
        ofstream.close()
    */

    int a = 64;

    ofstream myFile;

    myFile.open("data-1.txt", ios::out);

    myFile << "menuliskan sesuatu di data-1\n";

    myFile.close();

    myFile.open("data-2.txt", ios::trunc);

    myFile << "menuliskan sesuatu di data-2\n";

    myFile.close();

    myFile.open("data-3.txt", ios::app);

    myFile << "menuliskan sesuatu di data-3\n";
    myFile << a;

    myFile.close();

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}