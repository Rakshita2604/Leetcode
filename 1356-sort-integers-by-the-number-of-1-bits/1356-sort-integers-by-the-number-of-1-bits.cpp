class Solution {
public:
    static bool compare(const int& v1, const int& v2)
    {
        int c1=__builtin_popcount(v1);
        int c2=__builtin_popcount(v2);
        if(c1==c2)
            return v1<v2;
        return c1<c2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};