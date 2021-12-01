#include <iostream>
using namespace std;

const 	int 	NUM_SCORES = 3;

class Student
{
	private:
		int 	sid;
		string 	sname;
		double 	*scores;
	public:
		Student() : sid(0) {}
    	Student(int id, string name, double *sc)
		{
			sid = id;
			sname = name;
			scores = new double[NUM_SCORES];
			for(int i=0;i<NUM_SCORES;i++)
				scores[i] = sc[i]; 

		}
		Student(const Student &s) // Student s2(s1),  s2.sid = s1.sid, s2.sname = s1.sname, scores will be copied
		{
			this->sname = s.sname;
			this->sid = s.sid;
			this->scores = new double[NUM_SCORES];
			for(int i=0; i<NUM_SCORES; i++)
			{
				this->scores[i] = s.scores[i];
			}
		}

    //Destructor
		~Student()
		{
			cout << "Destructor is Called\n";
			delete scores;
		}

		int getSid() const { return sid; }
		string getSname() const { return sname; }
		double *getScores() const { return scores; }
		void setSid(int i) { sid = i; }
		void setSname(string s) { sname = s; }
		void setScores(double *s)
		{
			for (int i = 0; i < NUM_SCORES; i++)
				scores[i] = s[i];
		}
	
	    friend void printStudent(Student s);
 
};

void printStudent(Student s_param)
{
	double *tmp;

	cout << "ID : " << s_param.getSid() << endl;
	cout << "Name: " << s_param.getSname() << endl;
	tmp = s_param.getScores();
	for (int i = 0; i < NUM_SCORES; i++)
		cout << *(tmp+i) << "\t";
	cout << endl;

	cout << " position 1 \n";
} // At this moment, we call the Destructor


int main()
{
	double sc[NUM_SCORES] = {10.0 , 30.0, 90.0};
	double *tmp;

	Student s1(1001, "John", sc) ;
	printStudent(s1);
	cout << " position 2 \n";

	tmp = s1.getScores();
	cout << *(tmp+1) << endl;

	Student s2(s1);
	printStudent(s2);

	

}