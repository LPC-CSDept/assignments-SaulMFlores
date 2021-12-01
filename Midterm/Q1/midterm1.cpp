#include "Numbers.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

void printNumbers(Numbers n);


void printNumbers(Numbers n)
{
    for (int i = 0; i < n.getValuesSize(); i++)
    {
        cout << n[i] << "\t";
    }
}

int main() 
{

}