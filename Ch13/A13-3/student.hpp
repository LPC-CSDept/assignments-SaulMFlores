#include <iostream>

class DOB{ 
    private:
    int month;
    int day;
    public:
    DOB();
    DOB(int month,int day);
    int getMonth() const{ return month; }
    int getDay() const { return day; }
    void printDate() const { cout << month << "\t" << day;}
    void setMonth (int month){ month = month; };
    void setDay(int day);
};

class Student{
    private:
    int sid;
    string sname;
    DOB dob;
    public:
    Student();
    Student(string name, int sid, DOB dob);
    int getSID() const;
    string getSname() const;
    DOB getDOB() const;
    void setSname(string name);
    void setSID(int sid);
    void setDOB(DOB dob);
};
