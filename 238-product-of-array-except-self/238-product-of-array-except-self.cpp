class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();
        int lp[n];
        int rp[n];
        lp[0]=nums[0];
        rp[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            lp[i]=nums[i]*lp[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            rp[i]=rp[i+1]*nums[i];
        }
        ans.push_back(rp[1]);
        for(int i=1;i<n-1;i++)
        {
            ans.push_back(lp[i-1]*rp[i+1]);
        }
        ans.push_back(lp[n-2]);
        return ans;
    }
};