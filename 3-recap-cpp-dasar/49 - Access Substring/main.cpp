/*
    Access Substring
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    string sentence_1, sentence_2;
    sentence_1 = "I have a big dream!!!";
    sentence_2 = "To make and develop an entertainment company in many sectors";

    cout << "1: " << sentence_1 << endl;
    cout << "2: " << sentence_2 << endl;
    cout << endl;
    
    /**********************************************************************
     * Access Substring
    ***********************************************************************/
    
    // substr( searchIndex, length )
    cout << sentence_1.substr(9,4);
    cout << sentence_2.substr(23,21) << endl;
    cout << endl;

    // find index from lowest index
    // find( string, startIndex? ) 
    //// int index_big = sentence_1.find("big");
    //// int index_ec = sentence_2.find("entertainment company");
    cout << sentence_1.substr( sentence_1.find("big"), 4 );
    cout << sentence_2.substr( sentence_2.find("entertainment company"), 21 ) << endl;
    cout << endl;

    // find index from highest index
    // find( string, startIndex? )
    cout << "index a: " << sentence_1.rfind("a") << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}