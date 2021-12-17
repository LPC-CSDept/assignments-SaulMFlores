#ifndef COURSE_H
#define COURSE_H
using namespace std;
class Course
{
    private:
        int ID;
        string name;
        int credit;
        static int NUM_COURSE;

    public:
        Course(){ID = 0; name = ""; credit = 0; NUM_COURSE ++;}
        Course(int i, string n, int c){ID = i; name = n; credit = c; NUM_COURSE ++;}
        
        void setID(int i){ID = i;}
        void setName(string n){name = n;}
        void setCredit(int c){credit = c;}
        
        int getID(){return ID;}
        string getName(){return name;}
        int getCredit(){return credit;}
        static int getNumCourses(){return NUM_COURSE;}
        friend istream &operator>>(istream &, Course &);
};
int Course::NUM_COURSE = 0; 

istream &operator>>(istream &ifs, Course &s)
{
    std::cout << "Creating course list" << endl;
    for (int i = 0; i < Course::getNumCourses(); i++)
    {
        ifs >> s.ID >> s.name >> s.credit;
    }
}
#endif