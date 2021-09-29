#include <iostream>
usinge namespace std;

int main(){
    int num = 100;
    int num2 = 200;
    int *ptr;

    cout << "Address of num " << &num << endl;

    ptr = &num;

    cout << "value of ptr " << ptr << endl;
}