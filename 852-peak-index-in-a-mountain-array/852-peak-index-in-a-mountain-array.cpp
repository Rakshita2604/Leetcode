class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1,mid=0;
        while(r>=l)
        {
            mid=l+(r-l)/2;
            if(mid-1>=0 && arr[mid]>arr[mid-1] && mid+1<n && arr[mid]>arr[mid+1])
                break;
            if(mid+1<=n && arr[mid]>arr[mid+1])
                r=mid-1;
            if(mid+1<=n && arr[mid]<arr[mid+1])
                l=mid+1;
            if(mid-1>=0 && arr[mid]>arr[mid-1] )
                l=mid+1;
        }
        return mid;
    }
};