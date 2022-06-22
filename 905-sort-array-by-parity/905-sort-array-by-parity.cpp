class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ans;
        vector <int> odd;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                ans.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        for(int i=0;i<odd.size();i++)
            ans.push_back(odd[i]);
        return ans;
    }
};