class Solution {
public:
    int check(string s, string p)
    {
        int i=0,j=0;
        while(i<p.size())
        {
            if(s.size()<p.size())
                return -1;
            else if(s[i]!=p[j])
                return -1;
            i++;
            j++;
        }
        return 1;
    }
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(string s: words)
        {
            if(check(s,pref)==1)
                c++;
        }
        return c++;
    }
};