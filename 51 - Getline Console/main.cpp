/*
    std::getline()
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    string input;

    cout << "masukan kalimat: ";
    // getline( where, toVariable )
    getline(cin, input);

    cout << "Input Anda: " << input << endl;


    /**************************************
        Program Penghitung Kata
    **************************************/
    // untuk mengetahui index spasi
    int index_spacing = 0;
    // untuk menghitung jumlah kata
    int word_count = 0;
    while (true){
        // memasukan index spacing
        index_spacing = input.find(" ", index_spacing + 1);

        // increment word_count
        word_count++;

        // sampai limit dari index spasi nya yg bernilai -1
        if (index_spacing < 0){
            break;
        }
    }

    cout << "Yang berjumlah " << word_count << " kata" << endl;
    

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}