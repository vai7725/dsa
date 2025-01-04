#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {543, 68, 6, 465, 70};

    int maxSum = INT_MIN, currSum = 0;

    for(int num:nums){
        currSum += num;
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }

    cout << "The max sum of subarry is: " << maxSum << endl;
    cout << "The time complexity of this approach is O(n^2)" << endl;

    return 0;
}