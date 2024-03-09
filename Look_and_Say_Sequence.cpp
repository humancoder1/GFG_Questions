//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string num = "1";
        int count = 1;
        string next_num = "";
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j < num.size() ; j++){
                if(num[j] == num[j+1]){
                    count++;
                    continue;
                }
                break;
            }
            next_num += to_string(count);
            next_num += num[i];
            num = next_num;
            next_num = "";
            
        }
        return num;
        
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends