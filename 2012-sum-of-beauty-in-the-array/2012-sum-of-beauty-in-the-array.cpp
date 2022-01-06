class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        int maxiright[100000]={0};
        int maxm=nums[0];
        for(int i=1;i<n;i++)
        {
            maxiright[i]=maxm;
            maxm=max(maxm, nums[i]);
        }
        int minileft[100000]={0};
        int minm=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            minileft[i]=minm;
            minm=min(minm, nums[i]);
        }
        int sum=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>maxiright[i] && nums[i]<minileft[i])
                sum+=2;
            else if(nums[i]>nums[i-1] && nums[i]<nums[i+1])
                sum+=1;
        }
        return sum;
    }
};