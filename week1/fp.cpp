#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream 	ofs;

	int 	number = 10000001;
	char 	name[10] = "John";
	double 	score1 = 100.23;
	double 	score2 = 200.23;
	double 	score3 = 300.23;

	ofs.open("new.bin");
	if (ofs){
		ofs.write((char *)&number, sizeof(number));
		ofs.write((char *)&name, sizeof(name));
		ofs.write((char *)&score1, sizeof(score1));
		ofs.write((char *)&score2, sizeof(score2));
		ofs.write((char *)&score3, sizeof(score3));
	}
	
}