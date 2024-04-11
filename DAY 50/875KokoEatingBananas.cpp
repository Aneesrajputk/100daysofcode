class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k=0;
        int left=1,right=10000000000;

        while(left<=right)
        {
            k=(left+right)/2;
            int curr=0;
            for(int i=0; i<piles.size(); i++)
            {
                curr+=ceil((double)piles[i]/k);
            }

            if(curr<=h) right=k-1;

            else left=k+1;
        }
        return left;
    }
};