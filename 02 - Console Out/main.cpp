/*
    Printing to Console

    jelasin comment dan printing

    gambar robot
*/

#include <iostream>

int main() {

    // Intro String dan Printing
    std::cout << "\n\nHalo Temen-Temen!";
    std::cout << " Spasi itu berpengaruh loh!";
    std::cout << " Cara bikin baris baru?\n";
    std::cout << "pake \"\\n\" buat bikin baris baru" << std::endl;
    std::cin.get();

    // Implementasi dengan menggambar robot
    std::cout << "______________\n";
    std::cout << "|            |\n";
    std::cout << "|  ()    ()  |\n";
    std::cout << "|            |\n";
    std::cout << "|   \\____/   |\n";
    std::cout << "|____________|\n";
    std::cin.get();
    
    return 0;
}