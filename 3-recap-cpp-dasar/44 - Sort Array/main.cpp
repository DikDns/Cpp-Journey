/*
    Algorithm Standard Library
        - Sorting
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
    std::array<char, 10> alfabeth = {'d','g','h','a','e','b','i','j','c','f'};

    printArray(numbers);
    printArray(alfabeth);

    std::cout << std::endl;
    std::cout << "Sorting: " << std::endl;
    
    // Mengurutkan Array
    // std::sort(&numbers[0], &numbers[10]);
    std::sort(numbers.begin(), numbers.end());
    
    std::sort(alfabeth.begin(), alfabeth.end());

    printArray(numbers);
    printArray(alfabeth);

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