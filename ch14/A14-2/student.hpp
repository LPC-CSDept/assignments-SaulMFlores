#ifndef 	STUDENT_H
#define 	STUDENT_H
#include <vector>
#include <string>
using namespace std;

class Student
{
	private:
		int sid;
        string sname;
		vector<int> scores;
	public:
		Student() : sid(0) {}
    	Student(int id, vector<int> &sc)
		{
			sid = id;
			scores = sc; 
		}

	
	    friend void printStudent(Student s);
	    friend int greaterScore(Student s1, Student s2);
 
};

#endif