class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int j=0;
        int k=strs[0].size();
        while(j<k)
        {
            char a=strs[0][0];
            for(int i=0;i<strs.size();i++)
            {
                if(strs[i][0]!=a)
                    return s;
                else
                {
                    strs[i].erase(strs[i].begin());
                }
            }
            s.push_back(a);
            j++;
        }
        if(j==k)
            return s;
        return "";
    }
};