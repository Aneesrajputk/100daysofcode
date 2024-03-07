class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=nums[0];
        int currmax=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
            currmax=currmax+nums[i];
            }
            else{
                maxi=max(maxi,currmax);
                currmax=nums[i];
            }
        }
         maxi=max(maxi,currmax);
         return maxi;
        
    }
};