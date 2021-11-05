#include "student.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void printStudent(Student &s);
void sortStudent(Student &s, int n);
int main()
{
	ifstream ifs;
	const int N = 10;
	string sname;
	int idnum, month, day;
	DOB date;
	Student s[10];

	ifs.open("studentsDOB.txt");
	if (ifs.fail())
	{
		cerr << " File not open\n";
		exit(0);
	}
	int i = 0;
	while (ifs >> sname >> idnum >> month >> day)
	{
		date.setDOB(month, day);
		s[i].setSname(sname);
		s[i].setSID(idnum);
		s[i].setDOB(date);
		i++;
	}

	for (int i = 0; i < N; i++)
	{
		printStudent(s[i]);
	}
	
	sortStudent(s,N);
}

void printStudent(Student &s)
{
	DOB date;
	cout << "Student Name: " << s.getSname() << endl;
	cout << "Student ID: " << s.getSID() << endl;
	date = s.getDOB();
	date.printDate();
}

void sortStudent(Student &s, int N)
{
	int month = s.dob.getMonth();
	int day = s.dob.getDay();

    for(int i=0; i<N; i++){
        for (int j=0; j<N-1; j++){
            if (s[j].dob.getMonth() < s[j+1].dob.getMonth()){
				if(s[j].dob.getDay() < s[j+1].dob.getDay()){
					swap (s[j], s[j+1]);
				}
            }
		}
	}
}