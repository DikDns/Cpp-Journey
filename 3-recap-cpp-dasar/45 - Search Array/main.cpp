/*
    Algorithm Standard Library
        - sort dulu
        - Search
            binary_search( addressAwal, addressAkhir, YangDicari )     | Return Boolean
*/
#include <iostream>
#include <array>
#include <algorithm>

void printArray (std::array<int, 10> &);
void printArray (std::array<char, 10> &);

int main(){
    
    std::cout << "\n=======|  Mulai  |=======\n\n";

    // Bikin Array Numbers
    std::array<int, 10> numbers = {10,3,7,4,8,9,1,2,5,6};
    printArray(numbers);

    // menampung input user
    int search;
    // menampung return value dari binary_search
    bool found;

    std::cout << std::endl;
    std::cout << "Search Number: ";
    std::cin >> search;
    
    // Mencari Array Harus di Sort dlu
    std::sort(numbers.begin(), numbers.end());
    found = std::binary_search(numbers.begin(), numbers.end(), search);
    
    std::cout << std::endl;

    // output
    if (found){
        std::cout << "Nomer " << search << " ketemu di dalam array nya!\n";
    } else {
        std::cout << "ERROR: \"Nomer " << search << " tidak ketemu!\"\n";
    }

    std::cout << "\n=======| Selesai |=======\n\n";

    std::cin.get();
    return 0;
}



void printArray (std::array<int, 10> &inputArray){
    std::cout << "Array = { ";
    for (int &index : inputArray){
        std::cout << index << ", ";
    }
    std::cout << "}\n";
}

void printArray (std::array<char, 10> &inputArray){
    std::cout << "Array = { ";
    for (char &index : inputArray){
        std::cout << "\'" << index << "\', ";
    }
    std::cout << "}\n";
}