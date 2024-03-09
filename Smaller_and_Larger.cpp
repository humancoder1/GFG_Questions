//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
        vector<int> ans;
        int min_count = 0 , max_count = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == x){
                min_count++;
                max_count++;
            }
            else if(arr[i] < x)  min_count++;
            else max_count++;
        }
        ans.push_back(min_count);
        ans.push_back(max_count);
        return ans;

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
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends