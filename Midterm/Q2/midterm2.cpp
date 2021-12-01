#include "student.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Binsearch(vector<Student> s, int n, int id);
void studentSort(vector<Student> s);
void printStudents(vector<Student> s);
void printStudentline(int id);

ostream &operator>>(istream &ifs, Student &s)
{
    int id;
    string name;
    int score[3];
    ifs >> id >> name;
    for (int i = 0; i < 3; i++)
    {
        ifs >> score[i];
    }
    s.setStudent(id, name, score);
}

int binsetup(vector<Student> s, int n, int target)
{
	int first, last, mid;
     
	return -1;
}

void studentSort(vector<Student> &s)
{
     for(int i=0; i<Student::getNumStudents(); i++){
         for (int j=0; j<Student::getNumStudents()-1; j++){
            if (s[j].getTotalSum() > s[j+1].getTotalSum()){
                swap(s[j],s[j+1]);
            }
        }
    }
}

void printStudentline(int id)
{
    cout << 
}

void printStudents(vector<Student> s)
{
    int *tmp;
    for(int i=0;i<Student::getNumStudents();i++){
        cout << s[i].getSID() << "\t" << s[i].getSname() << "\t";
        tmp = s[i].getScores();
        for (int j = 0; j<3; j++)
            cout << *(tmp+i) << "\t";
        cout <<endl;
    }
    cout << "==== END OF RECORD ==== \n";
}



int main() 
{
    ifstream ifs;
    ifs.open("student.txt");
    vector<Student> slist;
    Student s;
    int index;
    while (true){
        ifs >> s;
        if (ifs.eof())
            break;
        slist.push_back(s);
    }
    int idInput = 0;
    int index = 0;
    printStudents(slist);
    while(idInput != -1)
    {
        cout << "type -1 to exit" << endl;
        cout << "Enter student Id:" << '\t';
        cin >> idInput;
        cout << endl;

	    index = Binsearch(slist, Student::getNumStudents(), idInput);
	    if ( index == -1)
		    cout << " not found \n";
	    else
		    printStudentline(idInput);
    }
}
