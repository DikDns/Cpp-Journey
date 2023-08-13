/*
!   High Level Operators
    Casting Operator
*/
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    cout << "\n=======|  Mulai  |=======\n\n";

    int lima = 5;
    float pi = 3.14;
    char a = 'a';

    // implisit casting
    cout << pi + lima << endl;

    // explicit casting
    cout << lima + (int)pi << endl;
    cout << (int)a << endl;
    cout << (int)a + lima << endl;
    cout << (char)(a + lima) << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}