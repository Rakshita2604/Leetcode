class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector <int> ans;
        for(int i=0;i<spells.size();i++)
        {
            int j=potions.size()-1,k=0;
            long long int a=spells[i];
            while(k<=j)
            {
                int mid=k+(j-k)/2;
                if(potions[mid]*a>=success)
                    j=mid-1;
                else
                    k=mid+1;
            }
            if(j==potions.size()-1)
                ans.push_back(0);
            else
                ans.push_back(potions.size()-1-j);
        }
        return ans;
    }
};