#include <iostream>
#include <limits.h>
using namespace std;

void swapMinMax(int arr[], int size){

}

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 56, 76};
    int smallest = INT_MAX, largest = INT_MIN;
    int minIdx, maxIdx;


    // Before swapping

    cout << "Before swapping" << endl;
    for (int i = 0; i < marksSize; i++)
        
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < marksSize; i++)
    {
        if(marks[i] <smallest){
            smallest = marks[i];
            minIdx = i;
        }

        if(marks[i] > largest){
            largest = marks[i];
            maxIdx = i;
        }
    }

    swap(marks[minIdx], marks[maxIdx]);


    // After swapping

    cout << "After swapping " << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;


    return 0;
}