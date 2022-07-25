class Solution {
public:
    bool areequal(vector<int>& a,vector<int>& b)
    {
        for(int i=0;i<a.size();i++)
            if(a[i]!=b[i])
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        vector <int> freq1(26,0);
        vector <int> freq2(26,0);
        for(int i=0;i<s1.size();i++)
            freq1[s1[i]-'a']++;
        int i=0,j=0;
        while(j<s2.size())
        {
            freq2[s2[j]-'a']++;
            if(j-i+1==s1.size())
                if(areequal(freq1,freq2))
                    return true;
            if(j-i+1<s1.size())j++;
            else
            {
                freq2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};