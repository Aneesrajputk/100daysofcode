#include<bits/stdc++.h>
using namespace std;
   int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            int newBottles=numBottles/numExchange;
             int remBottles=numBottles%numExchange;
             ans=ans+newBottles;
             numBottles=newBottles+remBottles;
        }
        return ans;
        
    }
int main(){
 int numBottles=15;
 int numExhange=4;
int ans= numWaterBottles(numBottles,numExhange);

 cout<<ans;
 
return 0;
}
 