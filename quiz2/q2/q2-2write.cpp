#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    char name[20];
    int id;
    double scores[3];
    struct Student* next;
};


Student makeStudents(int n);

main(){

     const int N = 10;
     makeStudents(N);
    //  for (int i = 0; i<N; i++){
      //  ofs.write((char*) &ptr, sizeof(ptr));
    }
}

Student makeStudents(int N){
    
    ifstream ifs;
    ofstream ofs;

    ifs.open("students.txt");
    if ( ifs.fail()){
        cerr << "File open error\n";
        exit(0);
    }
    ofs.open("students.bin");
  
    Student *new_student, *head, *ptr, *prev;

	head = nullptr;

	for(int i=0; i<N; i++)
	{
		new_student = new Student;

        ofs.write((int*) &id, sizeof(ptr));
		cin >> new_student->id;
		new_student->next = nullptr;

		if ( head == nullptr)
		{
			head = new_student;
		}
		else
		{
			prev = nullptr;
			ptr = head ;
			while( ptr != nullptr)
			{
				if( new_student->id < ptr->id)
					 break;
				else
				{
					prev = ptr;
					ptr = ptr->next;
				}
			}
			if ( prev == nullptr)
			{
				head = new_student;
				new_student->next = ptr;
			}
			else
			{
				new_student->next = prev->next;
				prev->next = new_student;
			}
		}
	}
    
    ptr = head;
    int i = 1;
	while(ptr != nullptr)
    {
		cout << i++ << " node's value " << ptr->id << endl;
		ptr = ptr->next;
    }
    return ptr;
}