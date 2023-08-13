#include <iostream>
/*
	std:: adalah namespace iostream
	kita bisa bikin namespace sendiri!
	enaknya bikin di package file sendiri dengan dot h
*/

#include "custom.h" // ni di dalam sini namespace nya!!!

int main()
{
	int a = 4;
	custom::c = 4;
	std::cout << "Nilai c:" << custom::c << std::endl;

	custom::fungsi();

	custom::cout(a);

	return 0;
}