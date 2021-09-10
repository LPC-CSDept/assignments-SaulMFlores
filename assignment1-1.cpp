#include <iostream>
#include <fstream>

using namespace std;


struct student {
    int id;
    string name;
    double score[2];
    double sum;
    double avg;
};

int main()
{
    ifstream ifs;
    ofstream ofs;

    student s;
    ifs.open("studnets.txt");
        ofs.open("students.bin");
    

    for (int i=0; i<10; i++)
    {
        ifs >> s.id;
        ifs >> s.name[i];
        ifs >> s.score[0];
        ifs >> s.score[1];
        s.sum = s.score[0] + s.score[1];
        s.avg = s.sum/2;
    }

    for (int i=0; i<10; i++)
    {
        cout << s.id << endl;
        cout << s.name << endl;
        cout << s.sum << endl;
        cout << s.avg << endl;
    }

        ofs.write((char*) &s, sizeof(s));
}