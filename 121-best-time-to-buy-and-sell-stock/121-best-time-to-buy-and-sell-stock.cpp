class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxm=INT_MAX;
        int ans=0,dif=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<maxm)
                maxm=prices[i];
            dif=prices[i]-maxm;
            if(ans<dif)
                ans=dif;
        }
        return ans;
    }
};