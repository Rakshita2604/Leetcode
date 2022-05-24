class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n=operations.size();
        char s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                s=operations[i][j];
                if(s=='-')
                {
                    x=x-1;
                    break;
                }
                else if(s=='+')
                {
                    x=x+1;
                    break;
                }
                else
                    continue;
            }
        }
        return x;
    }
};