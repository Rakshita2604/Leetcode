//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int t[V+1];
	    t[0]=0;
	    for(int i=1;i<=V;i++)
	        t[i]=INT_MAX;
	   for(int i=1;i<=V;i++)
	   {
	       for(int j=0;j<M;j++)
	       {
	           if(coins[j]<=i)
	           {
	               int sub=t[i-coins[j]];
	               if(sub!=INT_MAX && sub+1<t[i])
	                t[i]=sub+1;
	           }
	       }
	   }
	   if(t[V]==INT_MAX)
	    return -1;
	   return t[V];
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends