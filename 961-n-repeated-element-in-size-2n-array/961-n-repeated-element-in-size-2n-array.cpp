class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int freq[10001]={0};
        for(int i=0;i<n;i++)
            freq[nums[i]]++;
        for(int i=0;i<10001;i++)
        {
            if(freq[i]==n/2)
                return i;
        }
        return 0;
    }
};