#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream myFile;
	string output, buffer;
	bool isData = false;
	int no;
	string nama;

	/*
		ios::in      Defaultnya
		ios::ate     Mulai dari akhir file bacanya
		ios::binary  (pembahasan selanjutnya)
	*/

	myFile.open("data.txt");

	while(!isData)
	{
		getline(myFile, buffer);          // adalah getline console string
		output.append("\n" + buffer);     // adalah contenation string

		if (buffer == "data")
		{
			isData = true;
		}
	}
	cout << output << endl;

	getline(myFile, buffer);
	cout << buffer << endl;

	int jumlahdata;

	while(!myFile.eof())
	{
		myFile >> no;
		myFile >> nama;

		cout << no << "\t" << nama << endl;
		jumlahdata++;
	}

	cout << "\nJumlah data: " << jumlahdata << endl;

	cin.get();
	return 0;
}