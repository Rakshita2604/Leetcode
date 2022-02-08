class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        int sum=0;
        string num3="";
        int val1, val2;
        while(i>=0 || j>=0)
        {
            if(i>=0)
                val1=num1[i]-'0';
            else
                val1=0;
            if(j>=0)
                val2=num2[j]-'0';
            else
                val2=0;
            sum=val1+val2+carry;
            num3+=to_string(sum%10);
            carry=sum/10;
            i--;
            j--;
        }
        if(carry>0)
            num3+=to_string(carry%10);
        reverse(begin(num3), end(num3));
        return num3;
    }
};