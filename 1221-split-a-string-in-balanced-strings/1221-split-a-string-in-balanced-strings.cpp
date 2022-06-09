class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int count=0;
        for(auto i:s)
        {
            if(i=='L')
                ans++;
            else
                ans--;
            if(ans==0)
                count++;
        }
        return count;
    }
};