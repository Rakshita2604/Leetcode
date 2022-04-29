class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ind=0, count=1,n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[ind]==nums[i])
                count++;
            else
                count-=1;
            if(count==0)
            {
                ind=i;
                count=1;
            }
        }
        return nums[ind];
    }
};