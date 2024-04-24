class Solution {
public:
    int tribonacci(int n) {
        if(n<3){ 
            return (n!=0);
        }
    
            int firstterm=0;
            int secondterm=1;
            int thirdterm=1;
            int fourthterm=0;
            for(int i=3;i<=n;i++){
                 fourthterm =firstterm+secondterm+thirdterm;

            firstterm=secondterm;
            secondterm=thirdterm;
            thirdterm=fourthterm;
            }
            return thirdterm;
        }

};