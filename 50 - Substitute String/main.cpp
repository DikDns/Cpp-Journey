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

    cout << "sentence_1: " << sentence_1 << endl;
    cout << "sentence_2: " << sentence_2 << endl;
    cout << endl;
    
    /**********************************************************************
     * Substitute String
    ***********************************************************************/
    
    // swap( string )
    sentence_1.swap(sentence_2);
    cout << "swap()" << endl;
    cout << "sentence_1: " << sentence_1 << endl;
    cout << "sentence_2: " << sentence_2 << endl;
    cout << endl;

    //  replace( index, length, string )
    sentence_2.replace(sentence_2.find("big"), 3, "small");
    cout << "replace()" << endl;
    cout << "sentence_1: " << sentence_1 << endl;
    cout << "sentence_2: " << sentence_2 << endl;
    cout << endl;

    //  insert( index, string )
    sentence_2.insert(sentence_2.find("have"), "do not ");
    cout << "insert()" << endl;
    cout << "sentence_1: " << sentence_1 << endl;
    cout << "sentence_2: " << sentence_2 << endl;
    cout << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}