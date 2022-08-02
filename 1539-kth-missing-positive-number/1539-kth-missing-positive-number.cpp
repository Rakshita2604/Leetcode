class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1,m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(arr[m]-1-m<k)
                l=m+1;
            else
                r=m-1;
        }
        return l+k;
    }
};