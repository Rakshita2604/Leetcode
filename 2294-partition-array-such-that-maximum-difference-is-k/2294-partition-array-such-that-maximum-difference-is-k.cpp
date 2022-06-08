class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=0,ans=0;
        while(i<n && j<n)
        {
            if(nums[j]-nums[i]<=k)
                j++;
            else
            {
                i=j;
                ans++;
            }
        }
        return (ans+1);
    }
};