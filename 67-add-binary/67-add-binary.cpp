class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 || j>=0)
        {
            int temp=(i>=0?(a[i]-'0'):0)+(j>=0?(b[j]-'0'):0)+carry;
            carry=temp/2;
            int digit=temp%2;
            ans+=to_string(digit);
            i--;
            j--;
        }
        if(carry>0)
            ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};