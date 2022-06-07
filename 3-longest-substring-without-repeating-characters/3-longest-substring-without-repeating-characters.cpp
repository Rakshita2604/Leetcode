class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0,j=0,ans=0,n=s.size();
        while(i<n)
        {
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>=j)
                j=mp[s[i]]+1;
            ans=max(ans,i-j+1);
            mp[s[i]]=i;
            i++;
        }
        return ans;
    }
};