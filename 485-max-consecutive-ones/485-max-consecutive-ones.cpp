class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=0,c=0;
        for(auto n:nums)
        {
            if(n==1)
                maxm=max(++c,maxm);
            else
                c=0;
        }
        return maxm;
        
    }
};