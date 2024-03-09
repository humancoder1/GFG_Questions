//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int count_set_Bit(int num){
        int count = 0;
        while(num>0){
            if(num&1){
                count++;
            }
            num = num>>1;
        }
        return count;
    }
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i = n-32 ; i <= n ; i++){
	        if(i +  count_set_Bit(i) == n){
	            return 0;
	        }
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends