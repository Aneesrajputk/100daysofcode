class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
       int sum=0;
    //   int n=array.size();
       for(int i=0;i<n-1;i++){
           sum=sum+array[i];
       }
           int totalsum= n*(n+1)/2;
           int ans=totalsum-sum;
    
       return ans;
       
    }   
    
};