#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int     *ptr;
    
    ptr = new int ;
    
    *ptr = 20;


    // int *saved ;
    // saved  = ptr; 
    
    delete ptr; //


    ptr = new int;
    *ptr = 30;

    delete ptr;

    ptr = (int *)malloc(sizeof(int)); // char *
    // free(ptr); // same ase delete
    // this is the same way to allocate memory space
    // ptr = new int;
}