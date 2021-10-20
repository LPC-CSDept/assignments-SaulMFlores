#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    char name[20];
    int id;
    double scores[3];
    struct Student* next;
};


void makeStudents(int n);

main(){

	const int N = 10;
	makeStudents(N);
    //  for (int i = 0; i<N; i++){                 Don't think I need this If I'm doing
      //  ofs.write((char*) &ptr, sizeof(ptr));   everything in the function makeStudents
}

void makeStudents(int N){
    
    ifstream ifs;
    ofstream ofs;

    ifs.open("students.txt");
    if ( ifs.fail()){
        cerr << "File open error\n";
        exit(0);
    }
    ofs.open("students.bin");
  
    Student *new_student, *head, *sptr;

	head = nullptr;

	for(int i=0; i<N; i++)
	{
		new_student = new Student;
		ifs >> new_student->id >> new_student->name;
		for(int j = 0; j<3; j++)
			ifs >> (new_student+i)->scores[j];
	
		new_student->next = nullptr;
		if ( head == nullptr)
		{
			head = new_student;
		}
		else
		{
			sptr = head ;
			while( sptr != nullptr)
			{
				sptr = sptr->next;
			}
		}
		ofs.write((char *) &head, sizeof(head));
	}
    
    sptr = head;
    int i = 1;
	while(sptr != nullptr)
    {
		cout << i++ << " node's value " << sptr->id << endl;
		sptr = sptr->next;
    }
}