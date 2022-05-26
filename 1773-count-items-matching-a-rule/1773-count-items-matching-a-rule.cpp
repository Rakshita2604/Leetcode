class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int c=0;
        if(ruleKey=="type")
        {
            for(int i=0;i<n;i++)
            {
                if(items[i][0]==ruleValue)
                    c++;
            }
        }
        if(ruleKey=="color")
        {
            for(int i=0;i<n;i++)
            {
                if(items[i][1]==ruleValue)
                    c++;
            }
        }
        if(ruleKey=="name")
        {
            for(int i=0;i<n;i++)
            {
                if(items[i][2]==ruleValue)
                    c++;
            }
        }
        return c;
    }
};