class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set <vector<int>> s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i,j,k,sum=0;;
        for(int i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=nums[k];
                    s.insert(temp);
                    j++;
                    k--;
                }
                else if(sum>0)
                    k--;
                else if(sum<0)
                    j++;
            }
        }
        vector <vector<int>> res(s.begin(),s.end());
        return res;
    }
};