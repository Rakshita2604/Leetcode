class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int ans=0;
        if(n<3)
            return 0;
        char a=s[0],b=s[1],c=s[2];
        for(int i=3;i<n;i++)
        {
            if(a!=b && b!=c && c!=a)
                ans++;
            a=b;
            b=c;
            c=s[i];
        }
        if(a!=b && b!=c && c!=a)
                ans++;
        return ans;
    }
};