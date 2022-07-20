class Solution {
public:
    void swap(int *x, int*y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        bool s;
        for(int i=0;i<n-1;i++)
        {
            s=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(&nums[j],&nums[j+1]);
                    s=true;
                }
            }
            if(s==false)
                break;
        }
       // for(int i=0;i<n;i++)
       //     cout<<nums[i]<<" ";
    }
};