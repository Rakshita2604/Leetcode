class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        vector <int> sum(n);
        for(int i=0;i<n;i++)
            sum[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                sum[i]+=accounts[i][j];
        }
        sort(sum.begin(),sum.end());
        return sum[n-1];
    }
};