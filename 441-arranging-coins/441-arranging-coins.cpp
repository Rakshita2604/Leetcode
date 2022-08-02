class Solution {
public:
    int arrangeCoins(int n) {
        int ans=1;
        while(n>0)
        {
            ans++;
            n-=ans;
        }
        return ans-1;
    }
};