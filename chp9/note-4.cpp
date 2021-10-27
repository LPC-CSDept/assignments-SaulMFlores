#include<iostream>
using namespace std;

int &getvalue(int &);

int main(){

    int *ptr;
    int num, ret;
    ptr = &num;

    ret = getvalue(num);


}

int &getvalu(int &n) {
    int local;
    cin >> n;
    return local;
}