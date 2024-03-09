//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here

        map<ll,ll> digit_map1 ;
        map<ll,ll> digit_map2 ;

        for(ll i = 0 ; i < 10 ; i++){
            digit_map1[i] = 0;
            digit_map2[i] = 0;
        }

        for(ll j = 0 ; j < N ;  j++){
            digit_map1[A[j]] += 1;
            digit_map2[B[j]] += 1;
            // cout << "key : " << j << " ; value :" << digit_map1[A[j]] << endl;
        }
        int count = 0;
        for(int  k = 0 ; k < N ; k++){
            // cout << "key1 : " << k << " ; value1 : " << digit_map1[A[k]] << "  key2 : " << k << "  ; value2 : " << digit_map2[A[k]] << endl;
            if(digit_map1[A[k]] == digit_map2[A[k]]){
                count++;
            }
        }
        if (count == N) return 1;

        return 0;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends