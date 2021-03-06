#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class DOB
{
private:
	int month;
	int day;

public:
	DOB();
	DOB(int m, int d);
	int getMonth() const;
	int getDay() const;
	void printDate() const;
	void setDOB(int m, int d);
	void setMonth(int m);
	void setDay(int d);
};

class Student
{
private:
	string sname;
	int sid;
	DOB dob;

public:
	Student();
	Student(string sname, int idnum, DOB date);
	int getSID() const;
	string getSname() const;
	DOB getDOB() const;
	void setSname(string name);
	void setSID(int num);
	void setDOB(DOB date);
};

#endif