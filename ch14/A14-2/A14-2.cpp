#include "Student.hpp"
#include <iostream>
using namespace std;


void printStudent(Student s);
int greaterScore(Student s1, Student s2); 
const int NUM_SCORES = 3;

int main()
{
	vector<int> sc1{99, 98, 97};
	vector<int> sc2{80, 70, 20};

	Student s1(10, sc1);
	Student s2(10, sc2);
	printStudent(s1);
	printStudent(s2);



  // int id;
  // 	string names[N] = {"John", "Greg", "Bill", "Amy", "Kurt"};
  // 	Student s[N];
  // 	vector<double> sc(NUM_COURSES);

	// for (int i = 0; i < N; i++)
	// {
	// 	sc.assign(NUM_COURSES, i * 100);
	// 	s[i] = Student((i + 1) * 10, names[i], sc);
	// }


	int ret = greaterScore(s1, s2);
	if ( ret )
		cout << "S1 is greater than S2\n";
	else
		cout << "S2 is greater than S1\n";
	
}
void printStudent(Student s)
{
	cout << "ID : " << s.sid << endl;
	for (int i = 0; i < NUM_SCORES; i++)
		cout << s.scores[i] << "\t";
	cout << endl;
}

int greaterScore(Student s1, Student s2)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < NUM_SCORES; i++){
        sum1 += s1.scores[i];
        sum2 += s2.scores[i];
    }
	return sum1 > sum2;
	

}
