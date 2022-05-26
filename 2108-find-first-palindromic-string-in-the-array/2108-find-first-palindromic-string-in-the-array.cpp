class Solution {
public:
    bool ispalindrome(string a)
    {
        string p=a;
        reverse(p.begin(),p.end());
        if(a==p)
            return true;
        else
            return false;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string s="";
        for(string s:words)
        {
             if(ispalindrome(s))
                 return s;
        }
        return s;
    }
};