#include "numheader.hpp"
#include <cstdlib>
#include <ctime>
#include <algorithm>
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
  
    vector<int> elmVal;
    int smaller;
    int diff;
    int numAtEnd;
    if(a.getSize() > b.getSize())
    {
        smaller = b.getSize();
        diff = a.getSize() - b.getSize();
        numAtEnd = b.getElm(smaller - 1);
        for (int i = 0; i < smaller; i++)
        {
            if (a.getElm(i) == b.getElm(i))
            {
                elmVal.push_back(b.getElm(i));
            }
        }
        for (int i = smaller; i < smaller + diff; i++)
        {
            if(a.getElm(i) == numAtEnd)
            {
                elmVal.push_back(numAtEnd);
            }
        }
    }

    else if(a.getSize() < b.getSize())
    {
        smaller = a.getSize();
        diff = b.getSize() - a.getSize();
        numAtEnd = a.getElm(smaller - 1);
          for (int i = 0; i < smaller; i++)
        {
            if (a.getElm(i) == b.getElm(i))
            {
                elmVal.push_back(b.getElm(i));
            }
        }
    }
    else{
        for(int i = 0; i < a.getSize()+1; i++)
        {
            if (a.getElm(i) == b.getElm(i))
            {
                elmVal.push_back(b.getElm(i));
            }
        }
    }
    elmVal.erase(std::unique(elmVal.begin(), elmVal.end()), elmVal.end());
  while(elmVal.size() != 0)
  {
      a.deleteElm(elmVal.back());
      elmVal.pop_back();
  }
}