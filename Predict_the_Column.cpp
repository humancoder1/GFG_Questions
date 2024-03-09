//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int count = 0;
        int max_count = 0;
        int ans_col = -1;
        for(int i = 0 ; i < N ; i++){
            count = 0;
            for(int j = 0 ; j < N ; j++){
                if (arr[j][i] == 0){
                    count++;
                }
            }
            if (count > max_count){
                max_count = count;
                ans_col = i;
            }

            else if(count == max_count){
                ans_col = min(i , ans_col);
            }
            // cout << count << "->" << max_count << endl;
        }
        return ans_col;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends