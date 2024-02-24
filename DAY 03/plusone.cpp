#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]!=9){
                 digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
               
            }
        }
        vector<int>arr(n);
       arr.insert(arr.begin(),1);
        return arr;}
 
return 0;
}