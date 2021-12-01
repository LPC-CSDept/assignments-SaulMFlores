#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include <string>
using namespace std;

const int NUM_SCORES =  3;

class Student
{
    private:
        int     sid;
        string  sname;
        double  *score;
    public:
        Student() {sid = 0; }
        Student(int id, string name, double *sc)
        {
            sid = id;
            sname = name;
            score = new double;

            for (int i = 0; i < NUM_SCORES; i++){
                score[i] = sc[i];
        }

        friend void printStudent(Student s){};
};

#endif