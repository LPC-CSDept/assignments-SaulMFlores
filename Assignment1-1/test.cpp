#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    int id;
    char name[20];
    double score[2];
    double sum;
    double avg;
};

int main(){
    ifstream ifs;
    Student s;
    char cstr[100];
    ifs.open("students.bin", ios::out|ios::binary);
    if(!ifs){
        cout << "Failed to open. students.bin not found";
    }
    ifs.read((char*)&s, sizeof(s));
    cout << s.id << endl;
    cout << s.score[1] << endl;
    cout << s.name << endl;

}