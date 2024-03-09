//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            vector<int> ans;
            long long n1 = n ;
            int n2 = n;
            for(int i = 0 ; i < d ; i++){
                // left shift
                if(n1&32768){
                    n1 = n1<<1;
                    n1 = n1|32768; 
                }
                else{
                    n1 = n1<<1;
                }
                // -----------------------
                // cout << n1 << endl;
                // right shift
                // cout<< n2 << endl;
                if(n2&1){
                    n2 = n2>>1;
                    n2 = n2|1;
                }
                else{
                    n2 = n2>>1;
                }
            }
            // cout<< n2 << endl;
            // cout<<n1 << endl
            ans.push_back(n1);
            ans.push_back(n2);
            return ans;
        }

};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends