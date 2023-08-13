/*
!   High Level Operators
    Bitwise Operator
    &   AND Bitwise AND
    |   OR  Bitwise inclusive OR
    ^   XOR Bitwise exclusive OR
    ~   NOT
    <<  SHL Shift bits left
    >>  SHR Shift bits right
*/
#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void printBinary(unsigned short value, string name)
{
    cout << name << " = " << bitset<2 * 8>(value) << " [] value = " << value << endl;
}

int main()
{
    cout << "\n=======|  Mulai  |=======\n\n";

    unsigned short a, b, c;
    a = 6;
    b = 10;

    cout << "\n& Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n| Bitwise OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n^ Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "\n~ Bitwise NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");

    cout << "\n<< Bitwise SHL" << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");

    cout << "\n>> Bitwise SHR" << endl;
    c = a >> 1;
    printBinary(a, "a");
    printBinary(c, "c");

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}