#include <iostream>
using namespace std;

void printarray(double * const, int);
int main(){
    double num[5] = {10,20,30,40,50};
    int *ptr;
    printarray(num, 5);
}

void printarray (int *ptr, int N){
    for (int i=0; i<5; i++){
        cout << *(ptr+1) << "\t";
    }
    cout << endl;
}