#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct Student{
    int id;
    char name[20];
    double score[2];
    double sum;
    double avg;
};

// void printrecord(){}

int main(){
    ifstream ifs;
    Student s;
    ifs.open("students.bin",ios::binary);
    if(!ifs){
        cout << "Failed to open. students.bin not found";
    }


    cout << "Id " << s.id << "\t";
    cout << "Name " << s.name << "\t";
    cout << "Score1 " << s.score[0] << "\t";
    cout << "Score2 " << s.score[1] << "\t";
    cout << "Sum " << s.sum << "\t";
    cout << "Avg " << s.avg << "\n";
}