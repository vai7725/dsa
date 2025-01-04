#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int> &nums){
    int i = 0, j = nums.size()-1;
    while (true)
    {
        if(i>j){
            break;
        }else{
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    
}

int main(){

    vector<int> nums = {43, 23, 645, 67, 87};

    cout << "Original array: " << endl;

    for(int val: nums){
        cout << val << " ";
    }

    cout << endl;

    reverseArr(nums);

    cout << "Reversed array: " << endl;
    for(int val: nums){
        cout << val << " ";
    }

    return 0;
}