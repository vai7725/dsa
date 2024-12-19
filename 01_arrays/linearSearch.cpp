#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return i;
        }
        return -1;
    }
    
}

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 56, 76};
    int target;

    cout << "Enter the number you wanna find - " << endl;
    cin >> target;

    int targetIdx = linearSearch(marks, marksSize, target);

    if(targetIdx != -1){
        cout << "Target found at the index - " << targetIdx;
    }else{
        cout << "Target not found." << endl;
    }

    return 0;
}