#include <iostream>
using namespace std;

int main(){
    int marksSize = 5;
    int marks[marksSize] = {43, 23, 54, 56, 76};
    int sum = 0;
    int prod = 1;

    for (int i = 0; i < marksSize; i++)
    {
        sum += marks[i];
        prod *= marks[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << prod << endl;

    return 0;
}