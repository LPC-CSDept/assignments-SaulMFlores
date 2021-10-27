#inlcude <iostream>
using namespace std;

int main(){

    int value = 100;
    int * const ptr = &value; // constant pointer to integer
    ptr = &num; // cannot change  x 

    int const * ptr; // pointer to constant integer value.
    int const * const ptr; // const pointer to constant integer.

}

int main2(){

    const int n = 100;
    const int * ptr;
}