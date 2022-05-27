class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
                a.push_back(i);
        }
        sort(a.begin(),a.end());
        return a;
    }
};