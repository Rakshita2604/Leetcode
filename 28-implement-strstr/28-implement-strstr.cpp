class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int h=haystack.size();
        if(n==0)
            return 0;
        if(n>h)
            return -1;
        for(int i=0;i<h;i++)
        {
            if(haystack[i]==needle[0] && (h-i)>=n)
            {
                int j=i;
                int k=0;
                while(k<n)
                {
                    if(haystack[j]==needle[k] && k==n-1)
                        return i;
                    if(haystack[j]!=needle[k])
                        break;
                    j++;
                    k++;
                }
            }
        }
        return -1;
    }
};