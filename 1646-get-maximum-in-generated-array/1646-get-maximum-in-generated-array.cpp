class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1)
            return n;
        vector <int> a(n+1);
        a[0]=0;
        a[1]=1;
        int maxm=1;
        for(int i =2;i<=n;i++)
        {
            a[i]=i%2==0? a[i/2]:a[i/2]+a[i/2+1];
            maxm=max(maxm,a[i]);
        }
        return maxm;
    }
};