#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream 	ifs;

	int 	number ;
	char 	name[10];
	double 	score1;
	double 	score2;
	double 	score3;


	ifs.open("new.bin");
	ifs.read((char *)&number, 4);
	cout << number << endl;

	ifs.seekg(10, ios_base::cur); 
	ifs.read((char *)&score1, 8);
	cout << fixed << score1 << endl;

}