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

int recBinSrch(vector<int> nums, int target, int start, int end)
{

    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target > nums[mid])
        {
            return recBinSrch(nums, target, mid + 1, end);
        }
        else if (target < nums[mid])
        {
            return recBinSrch(nums, target, start, mid - 1);
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

    cout << "The target found at the index (from reg method): " << binarySearch(nums, target) << endl;

    cout << "The target found at the index (from rec method): " << recBinSrch(nums, target, 0, nums.size() - 1) << endl;

    return 0;
}