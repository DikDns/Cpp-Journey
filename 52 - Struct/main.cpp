/*
    Struct
    mirip kek object di json file
*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

struct member{
    string name;
    int id;
    array<string, 2> items;
};

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    member dikdns;

    dikdns.name = "DikDns";
    dikdns.id = 10110;
    dikdns.items = {"Laptop", "Bottle"};

    cout << dikdns.name << endl;
    cout << dikdns.id << endl;
    cout << dikdns.items[0] + " " + dikdns.items[1] << endl;

    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}