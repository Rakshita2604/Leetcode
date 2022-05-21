class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        for(int i=0;i<n;i++)
            ans[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                ans[i]=ans[i]+nums[j];
            }
        }
        return ans;
    }
};