/*
    Nesting Struct
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

struct actor {
    string name;
    string birth;
};

struct movie {
    string title;
    string genre;
    float rating;
    int year;
    actor actor_1;
    actor actor_2;
    actor actor_3;
};

void printMovie(movie movie);

int main(){
    cout << "\n=======|  Mulai  |=======\n\n";

    movie code_geass_r1, code_geass_r2;
    actor leleouch, shirley, cc;

    leleouch.name = "Lelouch Lamperouge";
    leleouch.birth = "December 5, 1999";

    cc.name = "C.C.";
    cc.birth = "unknown";

    shirley.name = "Shirley Fenette";
    shirley.birth = "July 8, 2000";

    code_geass_r1.title = "Code Geass: Lelouch of the Rebellion";
    code_geass_r1.genre = "Action, Drama, Sci-Fi";
    code_geass_r1.rating = 8.7;
    code_geass_r1.year = 2006;
    code_geass_r1.actor_1 = leleouch;
    code_geass_r1.actor_2 = cc;
    code_geass_r1.actor_3 = shirley;
    
    code_geass_r2.title = "Code Geass: Lelouch of the Rebellion R2";
    code_geass_r2.genre = "Action, Drama, Sci-Fi";
    code_geass_r2.rating = 8.9;
    code_geass_r2.year = 2008;
    code_geass_r2.actor_1 = leleouch;
    code_geass_r2.actor_2 = cc;



    printMovie(code_geass_r1);
    printMovie(code_geass_r2);



    cout << "\n=======| Selesai |=======\n\n";
    cin.get();
    return 0;
}

void printMovie(movie movie){
    cout << "\\/======================|  MOVIE  |=======================\\/\n";
    cout << "> Title  : " << movie.title << endl;
    cout << "> Genre  : " << movie.genre << endl;
    cout << "> Rating : " << movie.rating << endl;
    cout << "> Year   : " << movie.year << endl;
    cout << "> Actors : ";

    if (!(movie.actor_1.name == "")) {
        cout << movie.actor_1.name;
    } 
    if (!(movie.actor_2.name == "")) {
        cout << ", " << movie.actor_2.name;
    } 
    if (!(movie.actor_3.name == "")) {
        cout << ", " << movie.actor_3.name;
    }

    cout << endl << endl;
}