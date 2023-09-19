//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findMin(int A[], int n)
    {
        // add your code here
        int odd_num = 0;
        int even_num = 0;
        int oper_count = 3;
        for(int i = 0 ; i < n ; i++){
            if(A[i] % 2 != 0){
                odd_num++;
            }
        }
        // cout << odd_num << endl;
        even_num = n - odd_num;
        
        if (n % 2 != 0 && odd_num == n){
            return -1;
        }
        if(even_num == n){
            return 0;
        }
        if(n%2 != 0 && odd_num % 2 == 0){
            return 0
        }
        else{
            for(int j = 0 ; j < n ; j++){
                int temp_count = 0;
                int num = A[j];
                // cout << num << endl;
                if(A[j] % 2 == 0){
                    // cout << "Hello" << endl;
                    while(num % 2 == 0){
                        num /= 2;
                        temp_count++;
                        // cout << temp_count << endl;
                        // cout << "Temp_count ->" << temp_count << endl;
                        cout << "Oper_count -> " << oper_count << endl;
                    }
                oper_count = min(oper_count,temp_count);
                }
            }
            return oper_count;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) cin >> A[i];
       

        Solution ob;
        cout << ob.findMin(A, N) << "\n";
        // ob.findMin(A , N);
    }
    return 0;
}

// } Driver Code Ends