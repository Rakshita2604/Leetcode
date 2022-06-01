class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int n=startTime.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=startTime[i];j<=endTime[i];j++)
            {
                if(j==queryTime)
                    c++;
            }
        }
        return c;
    }
};