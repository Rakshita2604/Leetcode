class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n;
        if(word1.size()>=word2.size())
            n=word2.size();
        else
            n=word1.size();
        for(int i=0;i<n ;i++)
        {
            s+=word1[i];
            s+=word2[i];
        }
        if(word1.size()>word2.size())
        {
            for(int i=n;i<word1.size();i++)
            {
                s+=word1[i];
            }
        }
        else
        {
            for(int i=n;i<word2.size();i++)
            {
                s+=word2[i];
            }
        } 
        return s;
    }
};