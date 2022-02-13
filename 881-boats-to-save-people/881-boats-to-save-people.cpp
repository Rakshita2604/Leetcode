class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        sort(begin(people),end(people));
        for(int i=0, j=people.size()-1;i<=j;count++)
        {
            int left=limit-people[j];
            j--;
            if(people[i]<=left)
                i++;
        }
        return count;
    }
};