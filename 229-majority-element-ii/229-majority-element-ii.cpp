class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> ans;
        int c1=0,c2=0,a=0,b=1;
        for(int n:nums)
        {
            if(a==n)
                c1++;
            else if(b==n)
                c2++;
            else if(c1==0)
            {
                a=n;c1=1;
            }
            else if(c2==0)
            {
                b=n;c2=1;
            }
            else
            {
                c1--;c2--;
            }
        }
            c1=0;c2=0;
            for(int n:nums)
            {
                if(n==a)c1++;
                else if(n==b)c2++;
            }
            if(c1>nums.size()/3)ans.push_back(a);
            if(c2>nums.size()/3)ans.push_back(b);
            return ans;
    }
};