class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int a=0;
        int b=nums[0]==1?1:0;
        int ans=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                a=b;
                b=0;
            }
            else
            {
                a=max(a+1,b);
                b++;
            }
            ans=max(ans,a);
        }
        return ans;
    }
};