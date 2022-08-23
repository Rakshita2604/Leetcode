class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i=0;i<=n;i++)
        {
            int count=0;
            int nums=i;
            while(nums!=0)
            {
                count+=nums%2;
                nums/=2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};