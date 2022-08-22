class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum<0)
                    left++;
                else if(sum>0)
                    right--;
                else{
                    ans.push_back(vector<int> {nums[i],nums[left],nums[right]});
                    while(left+1<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right-1&& nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
};