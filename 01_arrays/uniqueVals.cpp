#include <iostream>
using namespace std;

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 23, 76};
    int uniqueVals[marksSize];

    cout << "Original array" << endl;
    for (int i = 0; i < marksSize; i++)
    {
        cout << marks[i] << endl;
    }

    for (int i = 0; i < marksSize -1; i++)
    {
        int count = 0;
        for (int j = 0; j < marksSize; j++)
        {
            if(marks[i]==marks[j]){
                count += 1;

            }
        }
        if(count ==1){
            
        }
        
    }
    

    return 0;
}