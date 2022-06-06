class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> v;
        for(char i=s[0];i<=s[3];i++)
        {
            string n="";
            for(char j=s[1];j<=s[4];j++)
            {
                n=i;
                n+=j;
                v.push_back(n);
                n="";
            }
        }
        return v;
    }
};