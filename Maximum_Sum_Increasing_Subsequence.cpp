//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int prev_ele , curr_ele , nex_ele;
	    int sum = 0 ; 
        curr_ele = a[0];
	    for(int i = 1 ; i < n-1 ; i++){
            if (curr_ele < a[i]){
                    
            }
	    }
	    sum += arr[n-1];
	    return sum;
	}  
};


/*
10
4 1 2 3 40 2 1 33 29 10
*/




//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends