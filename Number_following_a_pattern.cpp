//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n = 1;
        string ans = "";
        stack<int> nums;
        for (auto i : S){
            if(i=='D'){
                nums.push(n);
                n++;

            }
            if(i== 'I'){
                nums.push(n);
                n++;
                while(!(nums.empty())){
                    // cout << nums.top() << endl;
                    ans += to_string(nums.top());
                    nums.pop();
                }
            }
        }
        while(!(nums.empty())){
            // cout << nums.top() << endl;
            ans += to_string(nums.top());
            nums.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends