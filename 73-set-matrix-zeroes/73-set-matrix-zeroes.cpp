class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c=1,row=matrix.size(),colm=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]==0)
                c=0;
            for(int j=1;j<colm;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--)
        {
            for(int j=colm-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
                if(c==0)
                    matrix[i][0]=0;
        }
    }
};