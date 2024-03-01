class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n=nums.size();
        int start=0;
        int end =n-1;
        int ptr=ans.size()-1;

        while(start<=end){
            int SS=nums[start]*nums[start];
            int ES=nums[end]*nums[end];

            if(SS>ES){
                ans[ptr]=SS;
                start++;

            }
            else{
                ans[ptr]=ES;
                end--;
            }
            ptr--;

        }
        return ans;
    }
};