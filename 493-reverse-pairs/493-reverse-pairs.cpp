class Solution {
public:
    int c;
    void counting(vector<int>& nums, int start,int mid, int end)
    {
        int left=start,right=mid+1;
        while(left<=mid && right<=end)
        {
            if((long)nums[left]>(long)2*nums[right])
            {
                c+=(mid-left+1);
                right++;
            }
            else
                left++;
        }
        sort(nums.begin()+start,nums.begin()+end+1);
        return ;
    }
    void mergesort(vector <int> & nums,int s,int e)
    {
        if(s==e)
            return;
        int mid=s+(e-s)/2;
        mergesort(nums,s,mid);
        mergesort(nums,mid+1,e);
        counting(nums,s,mid,e);
        return;
    }
    int reversePairs(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        c=0;
        mergesort(nums,0,nums.size()-1);
        return c;
    }
};