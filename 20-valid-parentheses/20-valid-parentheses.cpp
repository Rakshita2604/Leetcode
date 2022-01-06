class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                    st.push(s[i]);
                else
                {
                    char c=st.top();
                    if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='['))
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};