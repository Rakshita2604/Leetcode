class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int l=0,r=n-1;
        while(l<m && r>-1)
        {
            int current=matrix[l][r];
            if(current==target)
                return true;
            else if(target>current)
                l++;
            else
                r--;
        }
        return false;
    }
};