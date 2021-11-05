#include <iostream>
#include <array>
using namespace std;

int binarysearch(int [], int, int);

int main() {
   cout << binarysearch(int )
}
int binarySearch(int number[], int N, int target)
{
int first = 0;
int last  = N;
int mid;
while (first < last){
   mid = (first + last)/2;
   if(number[mid] == target)
      return -1;
   else if( number[mid] < target)
      first = mid + 1;
   else if ( number[mid] > target)
      last = mid -1;
   }
}