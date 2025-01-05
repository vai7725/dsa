#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;

    for (int i = 0; i < nums.size()-1; i++){
        for (int j = i; j < nums.size(); j++)
        {
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        
    }

    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main() {
    vector<int> nums = {543, 68, 6, 465, 70};
    int target = 76;

    vector<int> res = pairSum(nums, target);

    cout << res[0] << ", " << res[1] << endl;
    cout << "It's time complexity is O(n^2)";

    return 0;
}