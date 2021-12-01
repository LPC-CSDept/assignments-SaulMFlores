#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
using namespace std;

class Student
{
    private:
        static int NUMSTUDENTS;
        string sname;
        vector<Course> course;
        DOB dob;
    public:
        Student() : sname(), dob(), course() {NUMSTUDENTS++;}
        Student(string s, DOB d, vector<Course> &c)
        {
            sname = s;
            dob =d;
            course = c;
            NUMSTUDENTS += 1;
        }
        void setStudent(string s, DOB d, vector<Course> &c)
        {   
            sname = s;
            dob = d;
            course = c;
        }
        static int getNumStudents() { return NUMSTUDENTS; }
		DOB getDOB() const { return dob; }
		string getSname() const { return sname; }
		void setSname(string n) { sname = n; }
		vector<Course> &getCourse() { return course; }

};

int Student::NUMSTUDENTS = 0;

class Course
{
    private:
        string  cName;
        int     credit;
        char    grade;
        double  scores;
        string  semester;
    public:
    Course() : cName(), credit(0), grade('U'), scores(0.), semester("undefined") {}
	Course(string cn, int c, char g, double sc, string sem) : cName(cn), credit(c), grade(g), score(sc), semester(sem) {}
	void setCourse(string cn, int c, char g, double sc, string sem)
	{
		cName = cn;
		credit = c;
		grade = g;
		scores = sc;
		semester = sem;
	}
	string getCname() const { return cName; }
	int getCredit() const { return credit; }
	char getGrade() const { return grade; }
	double getScore() const { return scores; }
	string getSemester() const { return semester; }
};

class DOB
{
    private:
        int month;
        int day;
        int year;
    public:
        DOB() : month(1), day(1), year(1900){}
        DOB(int m, int d, int y)
        {
            month = m;
            day = d;
            year = y;
        }
        void setDOB(int m, int d, int y)
        {
            month = m;
            day = d;
            year = y;
        }
        int getMonth() const { return month; }
        int getDay() const { return day; }
        int getYear() const { return year; }
        void setMonth( int t) { month = t; }
        void setDay(int t) { day = t; }
        void setYear(int t) { year = t; }
};

#endif