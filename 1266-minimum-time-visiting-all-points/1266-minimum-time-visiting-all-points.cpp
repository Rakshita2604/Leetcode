class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int c=0;
        int curr;
        for(int i=1;i<n;i++)
        {
           curr=max((abs(points[i][0]-points[i-1][0])),(abs(points[i][1]-points[i-1][1])));
            c+=curr;
        }
        return c;
    }
};