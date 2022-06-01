class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a;
        bool t=false;
        for(int i=0;i<n;i++)
        {
            if(n%2==1)
                a.push_back(-(n/2)+i);
            else
            {
                if(-(n/2)+i!=0)
                    a.push_back(-(n/2)+i);
                else
                    t=true;
            }
        }
        if(t)
            a.push_back(n/2);
        return a;
    }
};