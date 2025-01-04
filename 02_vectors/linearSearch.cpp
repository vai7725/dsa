#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> nums, int target){
    int i = 0;
    for(int num:nums){
        if(num==target){
            return i;
        }
        i++;
    }
}

int main(){

    vector<int> nums = {43, 23, 645, 67, 87};
    int targetIndex = linearSearch(nums, 67);

    cout << "The target value found at the index: " << targetIndex << endl;


    return 0;
}