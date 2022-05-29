class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector <int> a1(m);
        vector <int> a2(n);
        for(int i=0;i<indices.size();i++)
        {
            a1[indices[i][0]]++;
            a2[indices[i][1]]++;
        }
        int a=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int c=0;
                c+=a1[i]+a2[j];
                if(c%2==1)
                    a++;
            }
        }
        return a;
    }
};