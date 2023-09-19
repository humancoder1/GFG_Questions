//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d % n ; // suppose size = 7 and d = 9 so after 7 rotations the array will again become in its original form so then we only have to do 2 rotations

        vector<int> temp;
        for(int i = 0 ; i < d ; i++){
            temp.push_back(arr[i]);
        }
        for(int j = d ; j < n ; j++){
            arr[j-d] = arr[j];
        }
        for(int k = n-d ; k < n ; k++){
            arr[k] = temp[k-(n-d)]; 
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends