//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        // if(n == 0){
        //     return 0;
        // }
        // if(n == 1){
        //     return 1;
        // }
        // return (nthFibonacci(n-1) + nthFibonacci(n-2))%1000000007; // here modulo by 1000000007 is done because answer can be very large
        int num_pre = 0 , num_forw = 1 , num_sum;
        for(int i = 0 ; i < n; i++){
            num_sum = num_pre + num_forw ;
            num_pre = num_forw;
            num_forw = num_sum; 
        }
        // cout << num_pre << endl;
        return num_pre % 1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends