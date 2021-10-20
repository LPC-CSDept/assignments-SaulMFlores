#include <iostream>
#include <fstream>


using namespace std;

struct Student{
    char name[20];
    int id;
    int scores[3];
};


main(){
 ifstream ifs;
 ofstream ofs;
 Student *sptr;
 sptr = new Student;
 
 
 ifs.open("students.txt");
 ofs.open("students.bin");
 for ( int i = 0; i<10; i++){
        ifs >> (sptr+i)->id >> (sptr+i)->name;
        for(int j = 0; j<3; j++){
            ifs >> (sptr+i)->scores[j];
        }
        ofs.write((char*) &sptr, sizeof(sptr));
    }
 ofs.close();
    delete sptr;
}