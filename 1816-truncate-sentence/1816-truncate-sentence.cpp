class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ' && c<k)
                ans+=s[i];
            else if(s[i]==' ' && c<k){
                c++;
                if(c!=k)
                    ans+=s[i];
            }
        }
        return ans;
    }
};