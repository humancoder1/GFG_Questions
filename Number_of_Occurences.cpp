//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
        int start = 0 ;
        int end = n - 1;
        int mid ; 
        int num_count = 0;

        while (start <= end){
            mid = start + ((end - start)/2);

            if (x == arr[mid]){
                num_count++;
            }
            else if (x < arr[mid]){
                end = mid - 1;
            }
            else if (x > arr[mid]){
                start = mid + 1;
            }
        }
        return num_count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends