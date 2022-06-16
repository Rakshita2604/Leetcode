class Solution {
public:
    string sortString(string s) {
        int freq[26]={};
        for(int i=0;i<s.size();i++)
            freq[s[i]-'a']++;
        string ans="";
        while(ans.size()<s.size())
        {
            for(int i=0;i<26;i++)
            {
                if(freq[i]>0)
                {
                    ans+='a'+i;
                    freq[i]--;
                }
            }
            for(int i=25;i>=0;i--)
            {
                if(freq[i]>0)
                {
                    ans+='a'+i;
                    freq[i]--;
                }
            }
        }
        return ans;
    }
};