class Solution {
public:
    int countPoints(string rings) {
       vector <unordered_map<char,int>> a(10);
        for(int i=0;i<rings.size();i+=2)
        {
            int index=rings[i+1]-'0';
            a[index][rings[i]]++;
        }
        int ans=0;
        for(int i=0;i<10;i++)
        {
            if(a[i].size()==3)
                ans++;
        }
        return ans;
    }
};