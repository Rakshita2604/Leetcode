class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int carry=k;
        int i=n;
        vector <int> ans;
        while(--i>=0 || carry>0)
        {
            if(i>=0)
                carry+=num[i];
            ans.push_back(carry%10);
            carry/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};