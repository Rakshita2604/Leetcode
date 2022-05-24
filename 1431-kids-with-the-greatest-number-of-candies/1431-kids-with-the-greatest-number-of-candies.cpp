class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxm=0;
         for(int i = 0; i < n; i++)
        {
            if(candies[i] > maxm)
            {
                maxm = candies[i];
            }
        }
        vector <bool> ans(n);
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxm)
                ans[i]=true;
            else
                ans[i]=false;
        }
        return ans;
    }
};