//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeStringEmpty(string s) {
        // code here
        int count_oper = 0;
        string str = "geek";
        for(auto i = s.begin() ; i < s.end() ; i++){
            int count = 0;

            for(auto j = i ; j < 4+i ; j++){
                
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        
        cin>>s;

        Solution ob;
        cout << ob.makeStringEmpty(s) << endl;
    }
    return 0;
}
// } Driver Code Ends