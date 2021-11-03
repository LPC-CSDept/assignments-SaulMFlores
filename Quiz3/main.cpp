#include "numheader.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() 
{
    //testing code 
    Numbers<int> num(1,8);
    cout << num.getMax();
}