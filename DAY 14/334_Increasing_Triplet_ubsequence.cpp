class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return false;

        }
        int middle =INT_MAX;
        int smallest=INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]>middle){
                return true;

            }
                else if(nums[i]>smallest and nums[i]<middle) middle=nums[i];
            else if(nums[i]<smallest) smallest=nums[i];
        }
        return false;
    }
            
};