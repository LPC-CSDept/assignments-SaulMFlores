#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Student
{
    private:
        int sid;
        string sname;
        int *scores;
        static int NUM_STUDENTS;
        int TOTAL_SUM;
    public:
        Student() : sid(0), sname(), scores() {NUM_STUDENTS++;}
        Student(int id, string name, int scr[])
        {
            sid = id;
            sname = name;
            for (int i = 0; i<3; i++)
            {
                scores[i] = scr[i]; 
                TOTAL_SUM += scr[i];
            }
            NUM_STUDENTS += 1;
        }
        void setStudent(int id, string name, int scr[])
        {   
            sid = id;
            sname = name;
            for (int i = 0; i<3; i++)
            {
                scores[i] = scr[i]; 
                TOTAL_SUM += scr[i];
            }
        }

        int getSID(){ return sid; }
        void setSID(int id) { sid = id; }
        void setSname(string name) { sname = name; }
		string getSname() const { return sname; }
	    int getTotalSum() { return TOTAL_SUM; }
        int *getScores() const { return scores;}
        static int getNumStudents() { return NUM_STUDENTS; }
        friend ostream &operator>>(istream &ifs, Student &s);
};

int Student::NUM_STUDENTS = 0;




#endif