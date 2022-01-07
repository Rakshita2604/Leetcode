class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        string ans="";
        int i=0;
        stack <char> st;
        while(i<n)
        {
            if(st.empty() || s[i]!=st.top())
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                st.pop();
                i++;
            }
        }
        if(st.empty())
            return "";
        else
        {
            while(!st.empty())
            {
                ans=st.top()+ans;
                st.pop();
            }
            return ans;
        }
    }
};