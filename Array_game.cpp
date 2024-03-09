//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:

    vector<int> anti_clock_rotate(vector<int> arra, int size){
        for(int j = size-1 ; j >=0 ; j--){
            swap(arra[j] , arra[0]);
        }
        return arra;
        // for(int j = 0 ; j < size ; j++){
        //     cout << arra[j] <<" ";
        // }
        // cout << endl;

    }

    int min_operations(int n, vector<int>&arr, vector<int>&brr) {
	    // code here
        // for(int ele =0 ; ele < n ; ele++){
        int count_oper = 0;
        int t = 5;
        while(arr.size()){
            // cout << arr[0] << " " << brr[0] << endl;
            if(arr[0] == brr[0]){
                arr.erase(arr.begin());
                brr.erase(brr.begin());
            }
            else{
                arr = anti_clock_rotate(arr , arr.size());
            }
            // cout << arr.size() << endl;
            count_oper++;
        }
        return count_oper;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;
        vector<int> arr(n), brr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        Solution obj;
        cout << obj.min_operations(n, arr, brr) << endl;
    }
}

// } Driver Code Ends