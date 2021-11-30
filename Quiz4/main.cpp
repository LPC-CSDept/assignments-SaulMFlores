#include "course.hpp"
#include "student.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


ostream &operator>>(ostream &ifs, const Course &c)
{
    Course c;
    int credits; string cname, semester; int count;

    Student s;
    int id; string sname; char grade; double scores; 

    vector<Student> slist;

    ifs >> cname >> credits >> semester;
  
    ifs >> count;
    for (int i = 0; i < count; i++)
    {
        ifs >> id >> sname >> grade >> scores;
        s.setStudent(id, sname, grade, scores);
        slist.push_back(s);
    }
    c.setCourse(cname, credits, semester, slist);
}

ostream &operator<<(ostream &ofs, const Course &c)
{
    
}

int main()
{
    ifstream ifs;
    ofstream ofs;

    ifs.open("coursestudents.txt");
    

}