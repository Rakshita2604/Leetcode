class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=min(rectangles[i][0],rectangles[i][1]);
        }
        sort(a.begin(),a.end());
        int maxi=a[n-1];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==maxi)
                c++;
        }
        return c;
    }
};