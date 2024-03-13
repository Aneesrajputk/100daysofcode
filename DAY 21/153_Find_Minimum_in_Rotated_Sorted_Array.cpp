class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];//agar 1 element ka array aaye to 
        }
        else if(nums[0]<nums[nums.size()-1]){
            return nums[0];    //agar aaray sorted hi diya ho to 
        }


              int start = 0 ;
       int end = nums.size()-1 ;

       while(start<=end){
           int mid = (start + end )/2;

           if(mid!=0 && nums[mid-1]>nums[mid]){
               return nums[mid];
           }else if( mid!=nums.size()-1 && nums[mid]>nums[mid+1] ){
               return nums[mid+1];
           }else if(nums[start]<=nums[mid]){ 
             start = mid+1 ;
           }else{ 
                end = mid-1 ;
           }
       }
       return -1 ;
    }
};