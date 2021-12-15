/*
    Introduction to String
*/
#include <iostream>
#include <string>

int main(){
    
    std::cout << "\n=======|  Mulai  |=======\n\n";

    // String without Library
    // char names[6] = {'a', 'n', 'd', 'i', 'k', 'a'};

    // String with Library
    std::string firstName, lastName;

    std::cout << "Masukan Nama Depan: ";
    std::cin >> firstName;

    std::cout << "Masukan Nama Akhir: ";
    std::cin >> lastName;

    std::cout << std::endl;

    std::cout << "Halo " << firstName << " " << lastName << ", ";
    std::cout << "apa kabar?" << std::endl;

    std::cout << "\n=======| Selesai |=======\n\n";

    std::cin.get();
    return 0;
}