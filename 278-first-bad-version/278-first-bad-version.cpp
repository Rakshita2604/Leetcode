// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,h=n;
        while(h-l>1)
        {
            int mid=l+(h-l)/2;
            if(isBadVersion(mid))
                h=mid;
            else
                l=mid;
        }
        return h;
    }
};