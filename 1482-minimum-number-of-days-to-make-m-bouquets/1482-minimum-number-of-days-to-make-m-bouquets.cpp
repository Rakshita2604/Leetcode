class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size(),l=1,r=1e9;
        if(m*k>n)
            return -1;
        while(l<r)
        {
            int mid=(l+r)/2;
            int a=0,b=0;
            for(int j=0;j<n;j++)
            {
                if(bloomDay[j]>mid)
                    a=0;
                else if(++a>=k)
                {
                    b++;
                    a=0;
                }
            }
            if(b<m)
            {
                l=mid+1;
            }
            else
                r=mid;
            }
        return l;
    }
};