#include <iostream>
using namespace std;


void revArr(int arr[], int size){
    int startIdx = 0, endIdx = size - 1;

    // less efficient
    // for (int i = 0; i < size; i++)
    // {
    //     // cout <<"start index - " << startIdx << endl;
    //     // cout <<"end index - " << endIdx << endl;
    //     if(startIdx < endIdx){
    //         swap(arr[startIdx], arr[endIdx]);
    //         startIdx++;
    //         endIdx--;
    //     }
    // }

    while(startIdx < endIdx){
        swap(arr[startIdx], arr[endIdx]);
        startIdx++;
        endIdx--;
    }
    
}

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 56, 76};

    cout << "Original arr - " << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] <<" ";
    }

    cout << endl;
    cout << endl;

    revArr(marks, marksSize);
    cout << "Reversed arr - " << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}