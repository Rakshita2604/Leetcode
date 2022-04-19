class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int res=0,a=0;
        for(int i=n-1;i>=0;i--)
        {
            switch(s[i])
            {
                case 'I':a=1; break;
                case 'V':a=5; break;
                case 'X':a=10; break;
                case 'L':a=50; break;
                case 'C':a=100; break;
                case 'D':a=500; break;
                case 'M':a=1000; break;
            }
            if(4*a<res)
                res-=a;
            else
                res+=a;
        }
        return res;
    }
};