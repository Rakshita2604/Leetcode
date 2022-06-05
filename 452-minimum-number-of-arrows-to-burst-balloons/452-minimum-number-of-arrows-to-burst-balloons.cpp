class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int c=1;
        sort(points.begin(),points.end());
        int a=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(a>=points[i][0])
                a=min(a,points[i][1]);
            else
            {
                c++;
                a=points[i][1];
            }
        }
        return c;
    }
};