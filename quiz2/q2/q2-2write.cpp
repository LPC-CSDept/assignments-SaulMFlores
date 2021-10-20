#include <iostream>
#include <fstream>

using namespace std;

struct Student{
    char name[20];
    int id;
    double scores[3];
};


Student *makeStudents(int n);

main(){
 ifstream ifs;
 ofstream ofs;
     const int N = 10;
    Student *ptr=nullptr;
    ptr = makeStudents(N);
    ofs.open("students.bin");
    for (int i = 0; i<N; i++){
        ofs.write((char*) &ptr, sizeof(ptr));
    }
}

Student *makeStudents(int N){
    Student   *ptr = new Student [10];
    
    ifstream ifs;

    ifs.open("students.txt");
    if ( ifs.fail()){
        cerr << "File open error\n";
        exit(0);
    }
    for ( int i = 0; i<N; i++){
        ifs >> (ptr+i)->id >> (ptr+i)->name;
        for(int j = 0; j<3; j++)
            ifs >> (ptr+i)->scores[j];    
    }

    return ptr;
}