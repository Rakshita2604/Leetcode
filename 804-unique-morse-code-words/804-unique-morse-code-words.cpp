class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st; 
        for(string s:words)
        {
            string str="";
            for(char c:s)
            {
                str+=v[c-'a'];
            }
            st.insert(str);
        }
        return st.size();
    }
};