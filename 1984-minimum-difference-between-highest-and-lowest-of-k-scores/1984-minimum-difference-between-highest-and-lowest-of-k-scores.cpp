class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int minm=INT_MAX;
        sort(begin(nums),end(nums));
        for(int i=k-1;i<nums.size();i++)
        {
            minm=min(minm,nums[i]-nums[i-k+1]);
        }
        return minm;
    }
};