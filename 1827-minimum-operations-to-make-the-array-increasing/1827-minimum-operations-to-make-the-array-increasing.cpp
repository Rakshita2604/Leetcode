class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int i=1;
        int c=0;
        while(i<n)
        {
            if(nums[i-1]>=nums[i])
            {
                c+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
            i++;
        }
        return c;
    }
};