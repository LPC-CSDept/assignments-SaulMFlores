#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs;
    char    cstr[100];
    int     i;
    double  d;
    string  str;
    struct student{
        int     id;
        string  name;
    };
    student s;

    ifs.open("bin.out", ios::in|ios::binary);

    ifs.read(cstr, 15);
    cout << "Read 15 bytes from a file " << cstr << endl;

    ifs.read((char*)&i, sizeof(i));
    cout << "The next read 4 bytes " << i << endl;

    ifs.read((char*)&d, sizeof(d));
    cout << "The next read 8 bytes " << d << endl;

    ifs.read((char*)&str, sizeof(str));
    cout << "The next read " << sizeof(str) << " bytes " << str << endl;
    ifs.read(cstr, sizeof(str));
    cout << "The next read 24 bytes" << cstr << endl;

    ifs.read((char*)&s, sizeof(s));
    cout <<"The next read " << sizeof(s) << " bytes " << s.id << " " << s.name << endl;

    ifs.close();
}