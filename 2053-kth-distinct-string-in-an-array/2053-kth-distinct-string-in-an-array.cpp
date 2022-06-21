class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> m;
        for(string s:arr)
            m[s]++;
        for(auto s:arr)
            if(m[s]==1 && --k==0)
                return s;
        return "";
    }
};