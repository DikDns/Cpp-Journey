#include <iostream>
#include "bersama.h" // dia di include di semua header file

// ifndef, if not define, kebalikan ifdef. Biasanya buat preproccesing guarding / melindungi error(?)
#include "2nd_check.h"

// ifdef, untuk mengecek apa sudah di define atau belum
#include "check.h"

// pragma once, memastikan tidak akan ada duplicate nya jika menggunakan header file bersama
// ada di include bersama.h contohnya!

using namespace std;

int main()
{
	mahasiswa mhs1;
	mhs1.NIM = 10;

	cout << OUT1 << endl;

	cout << mhs1.NIM << endl;

	cin.get();
	return 0;
}