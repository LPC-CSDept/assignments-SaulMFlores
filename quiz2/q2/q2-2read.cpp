#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    char name[20];
    int id;
    int scores[3];
};

int main()
{
    ifstream ifs;
cout << "does this work?";
    Student *sptr;
    sptr = new Student;
    Student s = *sptr;
      ifs.open("students.bin", ios::out|ios::binary);
    if(!ifs)
    {
      cout << "Failed to open. students.bin not found";
    }
    
    ifs.read((char*)&sptr, sizeof(sptr));
   for ( int i = 0; i<sizeof(sptr); i++)
   {
        ifs >> (sptr+i)->id >> (sptr+i)->name;
        for(int j = 0; j<3; j++)
        {
            ifs >> (sptr+i)->scores[j];
        }
    }
    cout << "thers supposed to be something posted here -> " << s.id << endl;
}