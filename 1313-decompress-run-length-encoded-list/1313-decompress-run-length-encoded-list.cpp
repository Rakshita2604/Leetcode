class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector <int> a;
        int curr;
        for(int i=0;i<n;i+=2)
        {
            curr=nums[i];
            for(int j=0;j<curr;j++)
                a.push_back(nums[i+1]);
        }
        return a;
    }
};