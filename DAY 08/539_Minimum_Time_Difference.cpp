class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minute;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
             int min=stoi(curr.substr(3,2));
             int totalminute=hours*60+min;
             minute.push_back(totalminute);

        }

        //sort
        sort(minute.begin(),minute.end());

        int mini=INT_MAX;
        int n=minute.size();

        for(int i=0;i<n-1;i++){
            int diff=minute[i+1]-minute[i];
            mini=min(mini,diff);

        }

        int lastdiff=(minute[0]+1440)-minute[n-1];
        mini=min(mini,lastdiff);
        return mini;

        
    }
};