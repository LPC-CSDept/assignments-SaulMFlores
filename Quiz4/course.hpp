#ifndef COURSE_H
#define COURSE_H
class Course{
    private:
        string cname;
        int credits;
        string semester;
        vector<Student> student;
        static int NUM_COURSES;
    public:
        Course() : cname(""), credits(0), semester(""), student() {}
        Course(string n, int c, string m, vector<Student> &s)
        {
            cname = n;
            credits = c;
            semester = m;
            student = s;
            NUM_COURSES +=1;
        }
        void setCourse(string n, int c, string m, vector<Student> &s)
        {
            cname = n;
            credits = c;
            semester = m;
            student = s;
            NUM_COURSES +=1;
        }
        void addStudent(Student &s)
        {
            student.push_back(s);
        }//experiment betweenthese two ^ v
        Course setCourse(string n, int c, string m, vector<Student> &s)
        {
            cname = n;
            credits = c;
            semester = m;
            student = s;
        }
        void setCname(string n){cname = n;}
        void setCredits(int c){credits = c;}
        void setSemester(string m){semester = m;}

        string getCname(){return cname;}
        int getCredits(){return credits;}
        string getSemester(){return semester;}
        vector<Student> getStudent(){}

        static int getNumCourses() { return NUM_COURSES; }
        friend ostream &operator>>(ostream &, const Course &){}
        friend ostream &operator<<(ostream &, const Course &)}{}
};
int Course::NUM_COURSES = 0;
#endif