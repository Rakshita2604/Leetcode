class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        vector <int> a;
        for(int i=0;i<101;i++)
        {
            if(freq[i]>=2)
                continue;
            else if(freq[i]==1)
                a.push_back(i);
        }
        int sum=0;
        for(int i=0;i<a.size();i++)
            sum+=a[i];
        return sum;
    }
};