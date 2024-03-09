//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
        int start = 0;
        int end = N;
        while(start <= end){
            int mid = start + ((end - start)/2) ;
            if(mid*mid == N){
                return 1;
            }
            else if(mid*mid > N){
                end = mid - 1;
            }
            else if(mid*mid < N){
                start = mid + 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends