class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxm=nums[0];
        int start=-1,end=-1;
        for(int i=0;i<n;i++)
        {
            maxm=max(nums[i],maxm);
            if(nums[i]<maxm)
                end=i;
        }
        int minm=nums[n-1];
        for(int i=n-1;i>=0;i--)
        {
            minm=min(nums[i],minm);
            if(nums[i]>minm)
                start=i;
        }
        return (start<0?0:(end-start+1));
    }
};