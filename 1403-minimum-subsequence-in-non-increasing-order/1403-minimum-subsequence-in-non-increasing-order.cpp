class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        vector <int> ans;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum+=nums[i];
            int s=0;
            for(int j=0;j<i;j++)
                s+=nums[j];
            if(sum<=s)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                ans.push_back(nums[i]);
                break;
            }
        }
        return ans;
    }
};