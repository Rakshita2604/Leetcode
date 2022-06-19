class Solution {
public:
    string greatestLetter(string s) {
        string ans="";
        int freq[128]={0};
        for(int i=0;i<s.size();i++)
            {
                int a=s[i];
                freq[a]++;}
        for(int i=122;i>=97;i--)
        {
            if(freq[i]&&freq[i-32])
            {
                ans=i-32;
                return ans;
            }
        }
        return ans;
    }
};