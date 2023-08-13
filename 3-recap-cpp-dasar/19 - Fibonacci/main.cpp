/*
    Latihan Fibonacci
    1 1 2 3 5 8 13
    Formula:
        Fn = Fn-1 + Fn-2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n=======|  Mulai  |=======\n\n";

    unsigned long n, f0, f1, f;
    cout << "Input: ";
    cin >> n;
    cout << endl;
    f0 = 0;
    f1 = 1;

    for (int i = 1; i <= n; i++){
        f = f0 + f1;
        f1 = f0;
        f0 = f;
        cout << i << "   |   "<< f << "\n";
    }

    cout << "\n\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}
