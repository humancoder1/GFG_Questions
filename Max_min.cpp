//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    vector<int> max_min_Element(int arr[] , int size_n){
        int min_ele = INT32_MAX;
        int max_ele = INT32_MIN;
        for(int i = 0 ; i < size_n ; i++){
            if(min_ele > arr[i]){
                min_ele = arr[i];
            }
            if(max_ele < arr[i]){
                max_ele = arr[i];
            }
        }
        return {max_ele , min_ele};
    }
    int findSum(int A[], int N)
    {
    	//code here.
        vector<int> ans = max_min_Element(A , N);
        return (ans[0] + ans[1]);
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends