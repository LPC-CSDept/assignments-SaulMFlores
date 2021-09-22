#include <iostream>
#include <fstream>

using namespace std;


struct student {
    int id;
    char name[20];
    double score[2];
    double sum;
    double avg;
};

int main()
{
    ifstream ifs;
    ofstream ofs;

    student s;
    ifs.open("students.txt");
        ofs.open("students.bin");
    

    for (int i=0; i<10; i++)
    {
        ifs >> s.id;
        ifs >> s.name;
        ifs >> s.score[0];
        ifs >> s.score[1];
        s.sum = s.score[0] + s.score[1];
        s.avg = s.sum/2;
        cout << s.id << "\t";
        cout << s.name << "\t";
        cout << s.sum << "\t";
        cout << s.avg << endl;
        ofs.write((char*) &s, sizeof(s));
    }
}