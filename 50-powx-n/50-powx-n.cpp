class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long ab=abs((long)n);
        while(ab>0)
        {
            if((ab&1)==1)
                ans*=x;
            ab>>=1;
            x*=x;
        }
        return n<0?1/ans:ans;
    }
};