#include "numheader.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int findMax(Numbers<int> x[], int y);
void deDup(Numbers<int>& a, Numbers<int>& b);

int main()
{


    const int N = 5;
    //srand(time(0));
    Numbers<int> numberset[] =  {Numbers<int>(1, 5), Numbers<int>(2, 5), Numbers<int>(3, 10), Numbers<int>(4, 5), Numbers<int>(5, 7)};
    for (int i = 0; i < N; i++)
    {
        cout << "Number Set ID:  " << numberset[i].getID() << "\t";
        numberset[i].printAll();
    }

    int id = findMax(numberset, N);
    cout << "The set ID that has max difference is " << id+1 << "\t";
    cout << "The diff is " << numberset[id].getMax() - numberset[id].getMin() << endl;
   deDup(numberset[2], numberset[3]);
    cout << "ID 3 - ID 4\n ";
    numberset[2].printAll();
   deDup(numberset[0], numberset[1]);
    cout << "ID 1 - ID 2\n";
    numberset[0].printAll();
}

int findMax(Numbers<int> x[], int N)
{
    int maxdiff = 0;
    int index = -1;
    int i = 0;
    for (i; i < N ;i++)
    {
        if(maxdiff < x[i].getMax() - x[i].getMin())
        {
            maxdiff = x[i].getMax() - x[i].getMin();
            index = i;
        }
    }
    return index;
}


void deDup(Numbers<int>& a, Numbers<int>& b)
{  
    for(int i; i < a.getSize();i++)
    {
        if (a.getElm(i) == b.getElm(i))
        {
            a.deleteElm(i);
        }
    }
}