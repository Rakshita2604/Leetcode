class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        int c;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j] && j!=i)
                    c++;
            }
            ans[i]=c;
        }
        return ans;
    }
};