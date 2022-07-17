class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int j=0,odd=0,c=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] & 1 )
            {
                odd++;
                if(odd>=k)
                {
                    c=1;
                    while(!(nums[j++]&1))
                        c++;
                    ans+=c;
                }
            }
            else if(odd>=k)
                ans+=c;
        }
        return ans;
    }
};