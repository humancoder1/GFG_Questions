//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        string new_string = "";
        for(int i = 0 ; S[i] != '\0' ; i++){
            if(S[i]>=65 && S[i] <= 90){
                new_string += S[i] + 32;
            }
            else{
                new_string += S[i];
            }
        }
        return new_string;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends