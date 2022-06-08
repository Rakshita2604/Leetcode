class Solution {
public:
    string longestPalindrome(string s) {
        int l=0;
        int r=0;
        int st=-1;
        int e=-1;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            st=i;
            e=i;
            while(st>=0 && e<n && s[st]==s[e])
            {
                st--;
                e++;
            }
            st++;
            e--;
            if(e-st>r-l)
            {
                l=st;
                r=e;
            }
            st=i;
            e=i+1;
            while(st>=0 && e<n && s[st]==s[e] )
            {
                st--;
                e++;
            }
            st++;
            e--;
            if(e-st>r-l)
            {
                l=st;
                r=e;
            }
        }
        return s.substr(l,r-l+1);
    }
};