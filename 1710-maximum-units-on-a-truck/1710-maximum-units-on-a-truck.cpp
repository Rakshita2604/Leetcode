class Solution {
public:
   static bool compare(vector <int> &v1, vector <int> &v2){
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int total=0,i=0;
        for(;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
                total+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
                break;
        }
        if(truckSize>0 && i<boxTypes.size())
            total+=boxTypes[i][1]*truckSize;
        return total;
    }
};