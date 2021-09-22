#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

void printStudents(Students [], int);
void makeStudents(Students [], int);
void sortStudents(Students [], int);
int binarysearch(Students [], int, int);
void printtarget(Students [], int);

int main()
{
	const int N = 10;
	Students s[N];

	makeStudents(s, N); // To read the student information from the file
	printStudents(s, N); 


	// 1) Sort by ID
	sortStudents(s, N);
    printStudents(s,N);
	// 2) Search the certain student information by the ID (or any other fields)
	// binary search
    int target = 10006677;
    int result = binarysearch(s, N, target);
    if (result){
        cout << "Student Information: \n";
       printtarget(s, result);
    }

}

void sortStudents(Students s[], int N)
{  
    for (int i=0; i<N; i++){

        for (int J=0; J<N-1; J++){

            if (s[J].sid > s[J+1].sid)
                swap(s[J], s[J+1]);
        }

    }
}

void makeStudents(Students s[], int N)
{
	ifstream ifs;
	ifs.open("students.txt");

	if ( ifs.fail()){
		cout << "File not foudn\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		ifs >> s[i].sid >> s[i].sname;
		for(int j=0;j<NUM_SCORES; j++)
			ifs >> s[i].scores[j];
	}
}

void printStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}

int binarysearch(Students array[], int N, int target){
    int first, last, mid;
    int cmp = 0;

    first = 0;
    last = N-1;
    while ( first <= last){
        cmp += 1;
        mid = (first + last)/2;
        if (array[mid].sid == target)
            return mid;
        if (array [mid].sid > target)
            last = mid - 1;
        else first = mid + 1;
    }
    return -1;
}

void printtarget(Students s[], int result){
    cout << s[result].sid << "\t" << s[result].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[result].scores[j] << "\t";
}