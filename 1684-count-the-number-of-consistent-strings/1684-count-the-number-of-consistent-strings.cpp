class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
            unordered_set <char>s;
            int c=0;
            for(auto i:allowed)
                s.insert(i);
            for(auto it:words)
            {
                bool b=true;
                for(auto i:it)
                {
                    if(s.find(i)==s.end()){
                        b=false;
                        break;
                    }
                        
                }
                if(b)
                    c++;
            }
            return c;
        }
};