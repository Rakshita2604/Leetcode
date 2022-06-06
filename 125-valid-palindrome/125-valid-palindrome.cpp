class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
                s1+=tolower(s[i]);
            else if(islower(s[i]))
                s1+=s[i];
            else if(isdigit(s[i]))
                s1+=s[i];
            else
                continue;
        }
        string a=s1;
        int p=0;
        int q=s1.size()-1;
        while(p<=q)
        {
            swap(s1[p],s1[q]);
            p++;
            q--;
        }
        if(a==s1)
            return true;
        return false;
    }
};