class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0,j=0,ans=0;
        while(j<s.size())
        {
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                string ss=s.substr(i,k);
                int n=stoi(ss);
                if(n!=0 && num%n==0)
                    ans++;
                i++;
                j++;
            }
        }
        return ans;
    }
};