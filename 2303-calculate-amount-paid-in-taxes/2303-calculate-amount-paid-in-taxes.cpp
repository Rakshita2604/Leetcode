class Solution {
public:
    double calculateTax(vector<vector<int>>& bracket, int income) {
        double pay=0;
        for(int i=0;i<bracket.size();i++)
        {
            if(i==0)
                pay=min(income,bracket[i][0])*bracket[i][1];
            else
                pay+=((min(income,bracket[i][0])-bracket[i-1][0])*bracket[i][1]);
            if(income<bracket[i][0])
                break;
        }
        return pay*0.01;
    }
};