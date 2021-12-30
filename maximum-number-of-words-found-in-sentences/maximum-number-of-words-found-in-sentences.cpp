class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxm=0,c;
        for(string s: sentences)
        {
            int c=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==' ')
                    c++;
            } 
            maxm=max(maxm,c);
        }
        return maxm+1;
    }   
};