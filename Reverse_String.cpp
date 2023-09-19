//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
        int length = S.size(); 
        for(int i = 0 ; i < (length/2) ; i++){
            S[i] = S[i] ^ S[length-(i+1)];
            S[length-(i+1)] = S[i] ^ S[length-(i+1)];
            S[i] = S[i] ^ S[length-(i+1)];
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends