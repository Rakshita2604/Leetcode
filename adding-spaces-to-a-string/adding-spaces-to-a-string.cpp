class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.length();
        int n1=spaces.size();
        string ans="";
        for(int i=0,j=0;i<n;i++)
        {
            if(j<n1 && spaces[j]==i)
            {
                ans+=" ";
                j++;
            }
            ans+=s[i];
        }
        return ans;
    }
};