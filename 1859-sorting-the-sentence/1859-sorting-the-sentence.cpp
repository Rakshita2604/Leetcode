class Solution {
public:
    string sortSentence(string s) {
        map <int, string> ans;
        stringstream flag(s);
        string word;
        while(flag>>word)
        {
            int a=word.back();
            word.pop_back();
            ans.insert(pair<int,string>(a,word));
        }
        string result;
        map <int,string> :: iterator x;
        for(x=ans.begin();x!=ans.end();x++)
        {
            result+=x->second+" ";
        }
        result.pop_back();
        return result;
    }
};