class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int a;
        bool b=false;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]!=ch)
                s+=word[i];
            else if(word[i]==ch)
            {
                s+=word[i];
                a=i;
                break;
            }
            if(word[i]!=ch && i==word.size()-1)
                b=true;
        }
        reverse(s.begin(),s.end());
        string ans="";
        ans+=s;
        for(int i=a+1;i<word.size();i++)
        {
            ans+=word[i];
        }
        if(b)
            return word;
        return ans;
    }
};