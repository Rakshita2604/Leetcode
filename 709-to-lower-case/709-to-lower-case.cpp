class Solution {
public:
    string toLowerCase(string s) {
        string s1;
        for(int i=0;i<s.size();i++ )
        {
            if(isupper(s[i]))
                s1+=tolower(s[i]);
            else
                s1+=s[i];
        }
        return s1;
    }
};