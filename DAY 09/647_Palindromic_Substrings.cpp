class Solution {
public:
 int expandaroundindex(string s,int i,int j){
     int count=0;
     while(i>=0&&j<s.length()&&s[i]==s[j]){
         count++;
         i--;
         j++;
     }
     return count;
     }
    int countSubstrings(string s) {
        
        int count =0;
        int  n=s.length();
        for(int i=0;i<n;i++){
            //for odd

            int odd=expandaroundindex(s,i,i);
                count=count+odd;

            int even=expandaroundindex(s,i,i+1);
                count=count+even;
        }
        return count;
    }
};