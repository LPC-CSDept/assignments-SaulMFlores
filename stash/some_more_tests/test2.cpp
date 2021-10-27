#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){

    ofstream ofs;
    char cstr[100]="character Array";
    int i = 100;
    double d = 1234.5678;
    string str= "string object";

    struct student{
        int id;
        string name;
    };
    student s = {10, "student name"};

    ofs.open("bin.out", ios::out|ios::binary);

    ofs.write(cstr, strlen(cstr));

    cout << " Character array is written " << strlen(cstr) << " bytes\n";
    ofs.write((char *)&i, sizeof(i)); 

    cout << "Integer value 100 is written " << sizeof(i) << " bytes\n";

    ofs.write((char*)&d, sizeof(d));
    cout << "Double value 1234.5678 is written " << sizeof(d) << " bytes\n";

    ofs.write((char * )&str, sizeof(str));
    cout << "string object is written" << sizeof(str);

    ofs.write((char*)&s, sizeof(s));
    cout << "Structure s is written " << sizeof(s) << endl;


    ofs.close();

}