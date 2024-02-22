#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int count=0;
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[n-1]>nums[0])
        count++;
    return count<=1;
}

int main() {
    vector<int> nums = {4, 2, 3};
    cout << check(nums) << endl; // Output: 1 (true)

    vector<int> nums2 = {4, 2, 1};
    cout << check(nums2) << endl; // Output: 0 (false)

    return 0;
}
