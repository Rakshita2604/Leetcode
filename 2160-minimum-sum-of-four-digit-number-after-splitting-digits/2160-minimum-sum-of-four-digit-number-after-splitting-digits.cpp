class Solution {
public:
    int minimumSum(int num) {
        vector <int> a;
        while(num>0)
        {
            int rem=num%10;
            a.push_back(rem);
            num/=10;
        }
        sort(a.begin(),a.end());
        int num1=10*a[0]+a[3];
        int num2=10*a[1]+a[2];
        int sum=num1+num2;
        return sum;
    }
};