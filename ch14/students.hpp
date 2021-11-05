#ifndef 	STUDENT_H
#define 	STUDENT_H
#include <string>

class Student
{
	private:
		static int TOTAL_SUM;
		static int NUM_STUDENTS;
        int id;
        string name;
        double scores[3];
        
	public:
		Student() : id(0), name()
		{
			NUM_STUDENTS += 1;
		}
		// Student(string n, int sid, double *scr)
		Student(string n, int sid, double scr[])
		{
			name = n;
			id = sid;
			for(int i=0;i<3; i++)
			{
				// scores[i] = *(scr+i);
				scores[i] = scr[i];
                TOTAL_SUM += scr[i];
			}
            NUM_STUDENTS +=1;
		}
		int getID() { return id; }
		string getName() { return name; }
		void setID(int i) { id = i; }
		void setName(string s) { name = s; }
		static int getNumStudents()
		{
			return NUM_STUDENTS; 
		}
		static double getTotalSum()
		{
			return TOTAL_SUM;
		}
    void 
};

int Student::NUM_STUDENTS = 0;
int Student::TOTAL_SUM = 0;



#endif