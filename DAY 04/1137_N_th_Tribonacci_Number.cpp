class Solution {
public:
   int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1 || n==2){
            return 1;
        }
        else{
            long firstterm=0;
            long secondterm=1;
            long thirdterm=1;
            for(long i=1;i<=n;i++){
                long fourthterm=firstterm+secondterm+thirdterm;
                firstterm=secondterm;
                secondterm=thirdterm;
                thirdterm=fourthterm;

            }
            return firstterm;
        }
        
    }
};