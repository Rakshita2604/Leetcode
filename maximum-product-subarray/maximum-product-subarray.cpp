class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int maximum=nums[0];
        int minimum=nums[0];
        int a;
        for(int i=1;i<n;i++)
        {
            a=maximum;
            maximum=max(max(maximum*nums[i],minimum*nums[i]),nums[i]);
            minimum=min(min(minimum*nums[i],a*nums[i]),nums[i]);
            ans=max(ans,maximum);
        }
        return ans;
    }
};