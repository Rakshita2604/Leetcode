class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int dif=0;
        int c;
        int a=nums[0];
        for(int i=1;i<n;i++)
        {
            c=nums[i];
            while(a>c)
            {
                a=c;
                continue;
            }
            dif=max(dif,c-a);
        }
        if(dif==0)
            return -1;
        else
            return dif;
    }
};