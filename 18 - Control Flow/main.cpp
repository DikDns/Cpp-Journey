/*
    Control Flow

    Break; Continue;
    
*/
#include <iostream>

using namespace std;

int main() {
    
    cout << "\n\n=======|  Mulai  |=======\n\n";

    for ( int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "SKIP, ";
            continue;
            
            //cout << i << ", Berhenti!";
            //break;
        }
        cout << i << ", ";
    }

    cout << "\n\n=======|  Next\\  |=======\n\n";

    // i nya stuck
    int i = 0;
    while (i < 10){
        i++;
        if (i == 5){
            cout << "SKIP, ";
            continue;
        }
        cout << i << ", ";
    }

    cout << "\n\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}