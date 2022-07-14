class Solution {
public:
    vector<int> diStringMatch(string s) {
       int l= count(s.begin(),s.end(),'D'),r=l;
       vector <int> res={l};
        for(char &c:s)
            res.push_back(c=='I'?++r:--l);
        return res;
    }
};