#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
    
}

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 56, 76};

    cout << "Original array - " << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] << " ";
    }

        cout << endl;


    changeArr(marks, marksSize);
    cout << "After manipulation - " << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}