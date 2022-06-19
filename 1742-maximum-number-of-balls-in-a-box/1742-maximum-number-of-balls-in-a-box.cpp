class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int freq[100001]={0};
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int a=i;
            int sum=0,rem;
            while(a>0)
            {
                rem=a%10;
                sum+=rem;
                a/=10;
            }
            freq[sum]++;
        }
        int maxi=0;
        for(int i=0;i<100001;i++)
            if(maxi<freq[i])
                maxi=freq[i];
        return maxi;
    }
};