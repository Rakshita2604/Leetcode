class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.empty())
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            long long int sum1=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                long long int sum2=sum1-nums[j];
                int start=j+1;
                int end=nums.size()-1;
                while(start<end)
                {
                    long long int sum=nums[start]+nums[end];
                    if(sum<sum2)start++;
                    else if(sum>sum2)end--;
                    else
                    {
                        vector <int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[start];
                        quad[3]=nums[end];
                        ans.push_back(quad);
                        while(start<end && quad[2]==nums[start])start++;
                        while(start<end && quad[3]==nums[end])end--;
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j])
                    j++;
                while(i+1<nums.size() && nums[i+1]==nums[i])
                    i++;
            }
        }
        return ans;
    }
};