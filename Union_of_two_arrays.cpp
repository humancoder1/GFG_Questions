#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> S1;
        for(int i = 0 ; i < n ; i++){
            S1.insert(a[i]);
        }
        
        for(int j = 0 ; j < m ; j++){
            S1.insert(b[j]);
        }
		return S1.size();
    }
	
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

/*
for (int i = 0 ; i < size of greater array ; i++){
    if (i < size of smaller array)
}
*/