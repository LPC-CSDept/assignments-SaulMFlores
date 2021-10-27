#include <iostream>
using namespace std;
void getNumbers(int &, int &);
int main()
{

	int num1, num2;
	getNumbers(num1, num2);
	cout << "The input values are " << num1 << " and " << num2 << endl;

}
void getNumbers(int &n1, int &n2){
  cout << "Please enter your first value: " << endl;
  cin >> n1; // 100
  cout << "Please enter your second value: " << endl;
  cin >> n2; // 200

}