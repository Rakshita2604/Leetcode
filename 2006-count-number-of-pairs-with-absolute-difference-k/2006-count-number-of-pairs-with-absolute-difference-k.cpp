class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(abs(nums[j]-nums[i])==k &&i<j)
                    c++;
            }
        }
        return c;
    }
};