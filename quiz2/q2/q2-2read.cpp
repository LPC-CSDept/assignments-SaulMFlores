#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    char name[20];
    int id;
    int scores[3];
    struct Student* next;
};

int main()
{
    ifstream ifs;
       Student *new_student, *head, *sptr;

	head = nullptr;

	for(int i=0; i<10; i++)
	{
		new_student = new Student;
	
		new_student->next = nullptr;
		if ( head == nullptr)
		{
			head = new_student;
		}
		else
		{
			sptr = head ;
		ifs >> sptr->id >> sptr->name;
		for(int j = 0; j<3; j++)
			ifs >> (sptr+i)->scores[j];
			while( sptr != nullptr)
			{
				sptr = sptr->next;
			}
		}
	}
    
    sptr = head;
    int i = 0;
	while(sptr != nullptr)
    {
		cout << i++ << " node's value " << (sptr+i)->id << endl;
		sptr = sptr->next;
    }
}