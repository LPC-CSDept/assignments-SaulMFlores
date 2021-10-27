#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> &ref = getvector();

    for (int i = 0; i<ref.size();i++)
        cout << ref[i] << "\t";
    cout << endl;
}

vector<int> &getvector(){
    static vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    return numbers;
}