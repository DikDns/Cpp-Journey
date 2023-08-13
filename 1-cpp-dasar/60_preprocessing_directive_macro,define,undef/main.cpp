#include <iostream>

// macro yg merubah nilai const
#define PI 3.14159265359
#define NAMA "DIKDNSCREATIVE@GMAIL.COM"
#define BAHASA "INDONESIA"

// macro yg berfungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A>B) ? A:B)

using namespace std;

int main()
{
	cout << "	PI: " << PI << endl;
	cout << "	NAMA: " << NAMA << endl;
	cout << "	KUADRAT: " << KUADRAT(8) << endl;
	cout << "	MAX: " << MAX(4,3) << endl;
	cout << "	BAHASA: " << BAHASA << endl;

	// menghilangkan macro 
	#undef BAHASA
	#define BAHASA "INGGRIS"

	cout << "	BAHASA: " << BAHASA << endl;

	cin.get();
	return 0;
}