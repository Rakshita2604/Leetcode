class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> mp;
        for(int i=0;i<paths.size();i++)
            mp[paths[i][0]]=paths[i][1];
        string temp,ans;
        for(auto it:mp)
        {
            temp=it.second;
            while(mp.find(temp)!=mp.end()){
                temp=mp[temp];
            }
        }
        return temp;
    }
};