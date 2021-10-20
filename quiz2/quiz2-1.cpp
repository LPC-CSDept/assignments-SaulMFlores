#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void fillupArray ();
void printArray();

main () {

    int *ptr, array,;

}

void fillupArray(int *ptr){
    
    for (int i = 0; i < N; i++){
        array[i] = rand() % 100 +1;
    }
}

void printArray(int array[], int N){
    for (int i = 0; i<N; i++){
        cout << array[i] << "\t";
        if (i % 8 == 7) cout << endl;
    }
}
