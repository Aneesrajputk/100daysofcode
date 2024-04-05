class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans =nums[0];
        int m1=ans;
        int m2=ans;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(m1,m2);//negative ko ignore karne k liye 
            }
            m1=max(nums[i],m1*nums[i]);
            m2=min(nums[i],m2*nums[i]);
            ans=max(ans,m1);
        }
        return ans;
        }
};