class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int overlaps=0;
        pair<int,int> range;
        range.first=intervals[0][0];
        range.second=intervals[0][1];

        int i=1;

        while(i<intervals.size())
        {
            if(range.second>intervals[i][0])
            {
                overlaps++;
                if(range.second>intervals[i][1])
                {
                    range.first=intervals[i][0];
                    range.second=intervals[i][1];
                }
            }
            else{
                range.first=intervals[i][0];
                range.second=intervals[i][1];
            }
            i++;
        }
        return overlaps;
    }
};