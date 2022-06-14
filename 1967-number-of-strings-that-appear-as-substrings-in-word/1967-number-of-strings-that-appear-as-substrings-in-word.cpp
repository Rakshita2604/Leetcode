class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(int i=0;i<patterns.size();i++)
        {
            int m=patterns[i].size();
            if(m<=word.size())
            {
            for(int j=0;j<=word.size()-m;j++)
            {
                string s=word.substr(j,m);
                if(s==patterns[i])
                {
                    ans++;
                    break;
                }
            }
            }
        }
        return ans;
    }
};