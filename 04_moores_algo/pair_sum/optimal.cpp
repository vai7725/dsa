#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int i = 0, j = nums.size() - 1, pairSum =0;

    while (i<j){
        pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main() {
    vector<int> nums = {1,4,8,15,21};
    int target = 24;

    vector<int> res = pairSum(nums, target);

    cout << res[0] << ", " << res[1] << endl;
    cout << "It's time complexity is O(n)";

    return 0;
}