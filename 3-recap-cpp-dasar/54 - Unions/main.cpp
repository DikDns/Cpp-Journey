/*
!   Union
    satu deklarasi variable data bisa memiliki berbagai macam tipe datanya
*/
#include <iostream>

using namespace std;

union nama {
    int int_value;
    char char_value[4];
};

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    nama dikdns;

    dikdns.int_value = 123456;

    cout << "- int_value : " << dikdns.int_value << endl; 
    cout << "- char_value : " << dikdns.char_value << endl; 

    dikdns.char_value[0] = 'a';
    dikdns.char_value[1] = 'b';
    dikdns.char_value[2] = 'c';
    dikdns.char_value[3] = 'd';

    cout << "- int_value : " << dikdns.int_value << endl; 
    cout << "- char_value : " << dikdns.char_value << endl; 


    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}