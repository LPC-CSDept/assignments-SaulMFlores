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
        //something like
/* void findstudent(int id_num){
     int N = s.id.size()
     for (int i; i<N; i++){
         if (id_num == s.id[i]){
             cout << s.name[i] << "\t" << s.score[1][N] << "\t" << s.score[2][N] << "\t";
             cout << s.score[1][N] + s.score[2][N] << "\t" << (s.score[1][N] + s.score[2][N]) / 2 << "\n";
         } 
     }
}*/

int main(){
    ifstream ifs;
    Student s;
    ifs.open("students.bin", ios::in|ios::binary);
    if(!ifs){
        cout << "Failed to open. students.bin not found";
    }
    ifs.read((char*) &s, sizeof(s));
    cout << "Id " << s.id << "\t";
    cout << "Name " << s.name << "\t";
    cout << "Score1 " << s.score[0] << "\t";
    cout << "Score2 " << s.score[1] << "\t";
    cout << "Sum " << s.sum << "\t";
    cout << "Avg " << s.avg << "\n";



 /*for (int i = 0; i<10; i++){
        ifs >> s.id;
        ifs >> s.name;
        ifs >> s.score[0];
        ifs >> s.score[1];
        s.sum = s.score[0] + s.score[1];
        s.avg = s.sum/2;*/
    
}