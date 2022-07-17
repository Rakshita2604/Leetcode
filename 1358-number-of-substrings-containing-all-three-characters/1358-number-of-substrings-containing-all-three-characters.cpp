class Solution {
public:
    int numberOfSubstrings(string s) {
        int c[3]={0,0,0},i=0,ans=0,n=s.size();
        for(int j=0;j<n;j++)
        {
            c[s[j]-'a']++;
            while(c[0] && c[1] && c[2])
                c[s[i++]-'a']--;
            ans+=i;
        }
        return ans;
    }
};