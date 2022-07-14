class Solution {
public:
    bool ispalindrome(string p)
    {
        string a=p;
        reverse(a.begin(),a.end());
        if(p==a)
            return true;
        return false;
    }
    int removePalindromeSub(string s) {
        if(s.empty())
            return 0;
        else if(ispalindrome(s))
            return 1;
        return 2;
    }
};