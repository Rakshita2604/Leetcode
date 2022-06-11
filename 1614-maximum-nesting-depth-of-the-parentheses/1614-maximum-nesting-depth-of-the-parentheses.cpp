class Solution {
public:
    int maxDepth(string s) {
        stack <string> c;
        int maxi=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c.push("(");
                count++;
            }
            else if(s[i]==')')
            {
                c.pop();
                count--;
            }
            if(count>maxi)
                maxi=count;
        }
        return maxi;
    }
};