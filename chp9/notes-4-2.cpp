#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    int     id;
    char    *name=nullptr; //risky field;
};

int main()
{

    student s1, s2;

    s1.id = 10;
    s1.name = new char[20];
    strcpy(s1.name, "jan");

    cout << "S1 \n";
    cout << "ID : " << s1.id << endl;
    cout << "name : " << s1.name << endl;

    s2 = s1;
    cout << "S2 \n";
    cout << "ID : " << s2.id << endl;
    cout << "name : " << s2.name << endl;

    
}