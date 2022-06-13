class Solution {
public:
    string removeOuterParentheses(string s) {
        int p1=-1,p2=-1;
        int a=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                a++;
                if(p1==-1)
                    p1=i;
            }
            else
            {
                a--;
                if(a==0)
                {
                    p2=i;
                    ans+=s.substr(p1+1,p2-p1-1);
                    p1=-1,p2=-1;
                }
            }
        }
        return ans;
    }
};