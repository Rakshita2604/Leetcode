class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        for(int i=0;i<s.size();i+=2)
        {
            ans+=s[i];
            int no=s[i+1]-'0';
            int j=0;
            char curr=s[i];
            while(j<no)
            {
                curr++;
                j++;
            }
            ans+=curr;
        }
        int n=ans.size();
        if(ans.size()==s.size())
            return ans;
        else{
            ans.erase(n-1);
            return ans;
        }
    }
};