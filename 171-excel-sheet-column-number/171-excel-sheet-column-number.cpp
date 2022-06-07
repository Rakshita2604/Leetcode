class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size()-1;
        int sum=0;
        int c=0;
        for(int i=n;i>=0;i--)
        {
            int d=(int)columnTitle[i]-64;
            sum+=pow(26,c)*d;
            c++;
        } 
        return  sum;
    }
};