#include <iostream>
using namespace std;

int getvalue1(int &);
int getvalue2(int *);

int main(){
    
    int num, num2;
    //int &ref = num;  <-- alwyas points to num throughout program.
          // in declaration (on left of equals(=) sign), & is reference
//however in this |        //reference symbol & can only be used in declaration
//example we dont |         1) int &ref=num;
//need this declaration|    2) int getValue(int &num){}
//as our other functions|   3) int &getvalue( int )
//does the same thing| 


    int *ptr = &num;  

    getvalue1(num);
    getvalue2(&num);
}

int getvalue1(int &num){
    cout << "enter your input: ";
    cin >> num;
}

int getvalue2(int *num){
    cout << "enter your input: ";
    cin >> *num;
}