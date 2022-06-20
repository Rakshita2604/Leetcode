class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector <int> ans;
        unordered_map<int,int> m1,m2,m3;
        for(int i=0;i<nums1.size();i++)
            m1[nums1[i]]++;
         for(int i=0;i<nums2.size();i++)
            m2[nums2[i]]++;
         for(int i=0;i<nums3.size();i++)
            m3[nums3[i]]++;
        for(auto x:m1)
            if(m2.find(x.first)!=m2.end() || m3.find(x.first)!=m3.end())
                ans.push_back(x.first);
        for(auto x:m2)
            if(m1.find(x.first)!=m1.end() || m3.find(x.first)!=m3.end())
                ans.push_back(x.first);
        unordered_set<int> s;
        for(auto x:ans)
            s.insert(x);
        ans.clear();
        for(auto x:s)
            ans.push_back(x);
        return ans;
    }
};