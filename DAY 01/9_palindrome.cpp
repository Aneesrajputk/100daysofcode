#include<bits/stdc++.h>
using namespace std;
 bool palindrome_number(int x){
    if(x<0){
            return false;
        }
        
        int n=x;
        long reverseNum=0;
        while(n>0){
            int digit=n%10;
            reverseNum=reverseNum*10+digit;
            n=n/10;
        }
        if(reverseNum==x){
            return true;
        }
        else{
            return false;
        }
    
        
    }


 int main(){
    int x=121;
    // int x=-121;
    // int x=10;


    int ans=palindrome_number(x);
    cout<<ans;
 }