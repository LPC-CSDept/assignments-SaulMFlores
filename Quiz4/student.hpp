#ifndef STUDENT_H
#define STUDENT_H

class Student{
    private:
        int ID;
        string sname;
        char grade;
        double scores;
    public:
        Student() : ID(0), sname(""), grade(""), scores(0){}
        Student(int i, string n, char g, double s)
        {
            ID = i; 
            sname = n;
            grade = g;
            scores = s;
        }
        void setID(int i){ID = i;}
        void setSname(string n){sname = n;}
        void setGrade(char g){grade = g;}
        void setScores(double s){scores = s;}
        
        int getID(){return ID;}
        string getSname(){return sname;}
        char getGrade(){return grade;}
        double getScores(){}
};

#endif