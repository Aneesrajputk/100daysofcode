class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0;i--){
            int z=-nums[i];
            if(binary_search(nums.begin(),nums.end(),z))
            return nums[i];
        }
        return -1;
    }
};