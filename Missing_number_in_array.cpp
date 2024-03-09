//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum1 = 0;
        for (int i = 0 ; i < n-1 ; i++){
            sum1 += array[i];
        }
        int sum2 =  0;
        for(int  j = 1 ; j < n+1 ; j++ ){
            sum2 += j;
        }
        return (sum2 - sum1) ;
    }
    // bitwise approach
    // int missingNumber(vector<int>& array, int n) {
    //     // Your code goes here
    //     int num1 = 0; 
    //     for (int i = 0 ; i < n-1 ; i++){
    //         num1 ^= array[i];
    //     }
    //     int num2 =  0;
    //     for(int  j = 1 ; j < n+1 ; j++ ){
    //         num2 ^= j;
    //     }
    //     return (num2 ^ num1) ;
    // }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends