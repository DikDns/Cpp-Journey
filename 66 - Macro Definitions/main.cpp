// preprocessing directives
#include <iostream>

// macro: merubah nilai dengan nama

//  macro untuk nilai 
#define BAHASA "Indonesia"
#define PI 3.14159265359

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A : B)

int main(){

  std::cout << "Nilai PI: " << PI << std::endl;
  std::cout << "Nilai KUADRAT(2): " << KUADRAT(2) << std::endl;
  std::cout << "Nilai MAX(5,4): " << MAX(5,4) << std::endl;

  std::cout << "Sebelum: ";
  std::cout << "Bahasa " << BAHASA << std::endl;

  #undef BAHASA
  #define BAHASA "Inggris"

  std::cout << "Sesudah: ";
  std::cout << "Bahasa " << BAHASA << std::endl;

  std::cin.get();
  return 0;
}
