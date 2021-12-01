#include "Students.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
	double d[] = { 10.00, 20.12, 99.99};
	

	Student s1("John", 1001, d);

	cout << "Total number of Students " << Student::getNumStudents() << endl;	
	cout << fixed << setprecision(2) << "Total scores of Students " << Student::getTotalSum() << endl;	
    
}
