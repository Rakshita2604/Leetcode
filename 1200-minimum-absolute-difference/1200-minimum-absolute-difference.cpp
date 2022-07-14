class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minm=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++)
        {
            if(minm>=arr[i]-arr[i-1])
                minm=arr[i]-arr[i-1];
        }
        vector <vector<int>> ans;
        
        for(int i=1;i<arr.size();i++)
        {
            vector<int> v;
            if(minm==arr[i]-arr[i-1]){
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
            }
            else
                continue;
            ans.push_back(v);
        }
        return ans;
    }
};