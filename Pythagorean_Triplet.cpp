//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
        int count_Arr[1001] = {0};
        for(int i = 0 ; i < n ; i++){
            count_Arr[arr[i]] += 1;
        }

        for(int j = 0 ; j < 1000 ; j++ ){
            for(int k = j ; k < 1001 ; k++){
                if(count_Arr[j] > 0 && count_Arr[k] > 0){
                    int c = (j*j)+(k*k);
                    int d = sqrt(c);

                    if(((d*d) == c)  && count_Arr[d] > 0){
                        return true;
                    }
                }

              

            }
        }
        return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends