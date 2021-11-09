#include <iostream>
using namespace std;
/*
	!!!Jika menggunakan while hati - hati akan loop tak terhenti!!!
	Break; = Membuat keluar dari loopnya.
	Continue; = Membuat loncatan langsung melanjutkan loopnya.
*/
int main()
{
	cout << "Break di 2:" << endl;
	for(int i = 0; i <= 6; i++){
		if(i == 2){
			break;
		}
		cout << i << endl;
	}
	cout << "Continue di 2:" << endl;
	for(int i = 0; i <= 6; i++){
		if(i == 2){
			continue;
		}
		cout << i << endl;
	}




	
	cin.get();
	return 0;
}