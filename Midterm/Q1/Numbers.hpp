#ifndef NUMBERS_H
#define NUMBERS_H
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;

template<class T> 
class Numbers
{
    private:
        int ID;
        vector<T> values;
        static int NUM_OBJECTS;
    public:
        Numbers()
        {
            values = 0;
            ID = 0;
            NUM_OBJECTS += 1;
        }
        Numbers(int d, int v)
        {
            ID = d;
            for (int i = 0; i < v; i++)
                values.push_back(rand()%100);

            NUM_OBJECTS += 1;
        }
        int getID(){return ID;}
        void setID(int i){ID = i;}
        int getValuesSize(){return values.size();}
        static int getNumObjects(){return NUM_OBJECTS;}
        int operator>(const Numbers &s)
        {
            int n1, n2;
            n1 = 0;
            n2 = 0;
            for (int i = 0; i < this->values.size(); i++)
                n1 = n1 + this->values[i];
            for (int i = 0; i < s.values.size(); i++)
                n2 = n2 + s.values[i];            
            return n1 > n2;
        }
        
        friend void printNumbers(Numbers n){}


};
int Numbers::NUM_OBJECTS = 0;
#endif