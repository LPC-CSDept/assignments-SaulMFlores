#include "course.hpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void printClist(vector<Course> list)
{
    for (int i = 0; i < Course::getNumCourses(); i++)
    {
        cout << list[i].getID() << "\t\t" << list[i].getName() << "\t" << list[i].getCredit() << endl;
    }
    cout << "===========End==of==list===========" << endl;
}

int recSearch(vector<Course> list, int id, int size)
{

    if (list[size].getID() == id)
    {
        cout << list[size].getID() << "\t\t" << list[size].getName() << "\t" << list[size].getCredit() << endl;
        return 1;
    }
    else
        recSearch(list, id, size-1);
}
int binSearch(vector<Course> list, int id)
{
    int first, last, mid;

    first = 0;
    last = Course::getNumCourses() - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if ( list[mid].getID() == id)
            cout << list[mid].getID() << "\t\t" << list[mid].getName() << "\t" << list[mid].getCredit() << endl;
        if ( list[mid].getID() > id)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1;
}


int main()
{
    ifstream ifs;
    ofstream ofs;
    ifs.open("course.txt");
    vector<Course> cslist;
    Course cs;
    for (int i = 0; i < Course::getNumCourses(); i++)
    {
        ifs >> cs;
        cslist.push_back(cs);
    }
    printClist(cslist);
    binSearch(cslist, 1003334);
    recSearch(cslist, 1003334, Course::getNumCourses());
}