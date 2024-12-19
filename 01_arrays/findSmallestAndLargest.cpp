#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int marksSize = 5;
    int marks[marksSize] = {34, 54, -23, 65, 2};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // Loop for finding smallest number in the array
    for (int i = 0; i < marksSize; i++)
    {
        if(marks[i] < smallest){
            smallest = marks[i];
        }
    }

    cout << "The smallest number in the array is: " << smallest << endl;


    // Loop for finding largest number in the array
    for (int i = 0; i < marksSize; i++)
    {
        if(marks[i] > largest){
            largest = marks[i];
        }
    }

    cout << "The largest number in the array is: " << largest << endl;

    // Another way of finding largest and smallest is

    for (int i = 0; i < marksSize; i++)
    {
        smallest = min(marks[i], smallest);
        largest = max(marks[i], largest);
    }

    cout << "The largest num: " << largest << " The smallest num: " << smallest << endl;

    return 0;
}