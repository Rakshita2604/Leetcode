class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int left=0;
        int right=0;
        int sum=nums[0];
        int result=INT_MAX;
        bool f=false;
        while(right<n)
        {
            if(sum>=target)
            {
                if(right==left)
                    return 1;
                result=min(right-left+1, result);
                f=true;
                sum-=nums[left];
                left++;
            }
            else
            {
                right++;
                if(right<n)
                    sum+=nums[right];
            }
        }
        if(f)
            return result;
        else
            return 0;
    }
};