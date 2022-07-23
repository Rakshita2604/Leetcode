class Solution {
public:
    int uniquePaths(int m, int n) {
        vector <int> a(n,1),b(n,1);
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                b[j]=a[j]+b[j-1];
            }
            swap(a,b);
        }
        return a[n-1];
    }
};