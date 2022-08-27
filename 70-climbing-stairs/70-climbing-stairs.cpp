class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n==1 || n==2)
            return n;
        int step1=2;
        int step2=1;
        int count=0;
        for(int i=2;i<n;i++)
        {
            count=step1+step2;
            step2=step1;
            step1=count;
        }
        return count;
    }
};