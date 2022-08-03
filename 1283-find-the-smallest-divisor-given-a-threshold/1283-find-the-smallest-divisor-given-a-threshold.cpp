class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=1e6;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int sum=0;
            for(int i:nums)
                sum+=(i-1)/mid+1;
            if(sum<=threshold)
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};