class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int current=0;
        int maxm=0;
        int minm=0;
        int ans=0,p,q,r;
        for(int i=0;i<n;i++)
        {
            current+=nums[i];
            if(current>maxm)
                maxm=current;
            else if(current<minm)
                minm=current;
            p=current-minm;
            q=maxm-current;
            r=max(p,q);
            if(r>ans)
                ans=r;
        }
        return ans;
    }
};