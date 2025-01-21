#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target > nums[mid])
        {
            start = mid + 1;
        }

        else if (target < nums[mid])
        {
            end = mid - 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {12, 23, 34, 45, 56, 67, 78};
    int target = 34;

    int targetIdx = binarySearch(nums, target);

    cout << "The target found at the index: " << targetIdx << endl;

    return 0;
}