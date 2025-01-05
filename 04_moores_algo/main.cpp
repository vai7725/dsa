#include <iostream>
#include <vector>
using namespace std;

int majorityElem(vector<int> nums){
    int freq = 0, ans = 0;

    for(int num:nums){
        if(freq==0){
            ans = num;
        }
        if(num==ans){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2,1,2,1,2};

    int res = majorityElem(nums);

    cout << "The majority element in the array is: "<< res << endl;

    return 0;
}