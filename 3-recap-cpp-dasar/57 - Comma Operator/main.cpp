/*
!   High Level Operators
    Comma Operator
*/
#include <iostream>
#include <string>

using namespace std;

void print(int value){
    cout << value << endl;
}

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    // ini comma seperator biasa
    int a;
    int b;
    int c;

    // ini comma operator untuk ekspresi oneline
    print(a = ( b = 2 , print(b) , c = 3 , print(c) , b+c));

    //// print(a)

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}