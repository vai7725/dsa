#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {543, 68, 6, 465, 70};
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            currSum += nums[j];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "The max sum of subarry is: " << maxSum << endl;
    cout << "The time complexity of this approach is O(n^2)" << endl;

    return 0;
}