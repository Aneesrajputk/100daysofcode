class Solution {

int firstocuurence(vector<int>& nums, int target){
    
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans= mid;
            e=mid-1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int  lastoccurence(vector<int>& nums, int target){
     int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(target==nums[mid]){
            ans= mid;
            s=mid+1;
        }
        else if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstocuurence(nums,target),lastoccurence(nums,target)};
        
    }
};