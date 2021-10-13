#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LEN = 20;
const int NUM_SCORES = 3;
struct Students {
    int     sid;
    char    sname[MAX_LEN];
    double  scores[NUM_SCORES];
};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main(){
    const int N = 10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}

Students *makeStudents(int N){
    Students    *ptr = new Students [10];
    
    ifstream ifs;

    ifs.open("students.txt");
    if ( ifs.fail()){
        cerr << "File open error\n";
        exit(0);
    }
    for ( int i = 0; i<N; i++){
        ifs >> (ptr+i)->sid >> (ptr+i)->sname;
        for(int j = 0; j<NUM_SCORES; j++)
            ifs >> (ptr+i)->scores[j];

    }

    return ptr;
}

void printStudents(Students * const ptr, int N)
{
    for(int i=0;i<N;i++){
        cout << (ptr+i)->sid << "\t" << (ptr+i)->sname << "\t";
        for (int j = 0; j<NUM_SCORES; j++)
            cout << (ptr+i)->scores[j] << "\t";
        cout <<endl;
    }
    cout << "==== END OF RECORD ==== \n";
}

void sortStudents(Students * const ptr, int N){
    for(int i=0; i<N-1; i++){
        for (int j=0; j<N-i; j++){
            if ((ptr+j)->sid > (ptr+j+1)->sid){
                swap ((ptr+j)->sid, (ptr+j+1)->sid);
            }
        }
    }
}