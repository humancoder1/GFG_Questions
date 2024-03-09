//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string solve(int A, int B) {
        // code here
        string gender1;
        string gender2;

        if(A%2 == 0)gender1 = "He";
        else gender1 = "She";

        if(B%2 == 0)gender2 = "He";
        else gender2 = "She";

        if (gender1 == gender2){
            return gender1;
        } 
        return "Punished";
    }

};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {

        int A, B;
        cin >> A >> B;

        Solution ob;

        cout << ob.solve(A, B) << "\n";
    }
    return 0;
}

// } Driver Code Ends