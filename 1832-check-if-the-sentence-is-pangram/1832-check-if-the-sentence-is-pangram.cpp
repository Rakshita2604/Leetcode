class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        if(n<26)
            return false;
        vector<int> a(26,0);
        for(int i=0;i<n;i++)
            a[sentence[i]-97]++;
        for(int i=0;i<a.size();i++)
            if(a[i]==0)
                return false;
        return true;
    }
};