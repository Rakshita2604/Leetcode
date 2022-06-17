class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(auto m:s)
        {
            mp[m]++;
        }
        int first=mp[s.front()];
        for(auto m:mp)
        {
            if(m.second!=first)
                return 0;
        }
        return 1;
    }
};