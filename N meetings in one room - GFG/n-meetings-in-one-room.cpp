//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        pair <int,int> a[n+1];
        int i;
        for(i=0;i<n;i++)
        {
            a[i].first=end[i];
            a[i].second=i;
        }
        sort(a,a+n);
        int limit=a[0].first;
        int c=1;
        for(i=1;i<n;i++)
        {
            if(start[a[i].second]>limit)
            {
                c++;
                limit=a[i].first;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends