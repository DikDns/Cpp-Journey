#include <iostream>
#define PI 3.14
// # -> preprocessing directive
/*

  .cpp -> preprocessing -> .p -> compiling -> .o -> linking -> .exe

  ! Preprocessing Directive is not the same as compiling!!

  cara lihat file preprocessing directive
  g++ -E main.cpp -o main.p

  cara lihat file setelah compile atau object file
  g++ -c main.cpp -o main

  compile dari obj file
  g++ main.o -o main

  cara lihat obj file
  objdump

*/


int main(){

  int a = 2;

  std::cout << PI << std::endl;
  std::cout << a << std::endl;
  
  std::cin.get();
  return 0;
}