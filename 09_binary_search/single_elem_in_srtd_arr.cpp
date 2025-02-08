#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;

    if (nums.size() == 1)
    {
        return nums[0];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == 0 && (nums[mid] != nums[mid + 1]))
            return nums[mid];
        if (mid == nums.size() - 1 && (nums[mid] != nums[mid - 1]))
            return nums[mid];
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        {
            if (nums[mid - 1] == nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid - 1] == nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}