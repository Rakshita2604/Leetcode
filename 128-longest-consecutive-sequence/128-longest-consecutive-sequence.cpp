class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<1)
            return 0;
        sort(nums.begin(),nums.end());
        int c=1;
        int maxm=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
                c++;
            else if(nums[i]==nums[i-1])
                continue;
            else
            {
                maxm=max(maxm,c);
                c=1;
            }
        }
        maxm=max(maxm,c);
        return maxm;
    }
};