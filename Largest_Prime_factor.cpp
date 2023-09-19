//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int num_sqrt = sqrt(N);
        // cout << num_sqrt << endl;
        vector<long long> factors;
        for(int i = 1 ; i <= num_sqrt ; i++){
            if(N % i == 0){
                factors.push_back(i);
                factors.push_back((N/i));
            }
        }
        // for(int j = 0  ; j < factors.size() ; j++){
        //     cout << factors[j] << " ";
        // }

        // Prime verification :-
        long long max_prime = 2;
        for(long long j = 0 ; j < factors.size() ; j++){
            bool prime = true;
            for(int k = 2 ; k <= ((int) sqrt(factors[j])) ; k++){
                if(factors[j] % k == 0){
                    prime = false;
                    break;
                }
            }
            if (prime == true){
                max_prime = max(max_prime,factors[j]);
                // cout << max_prime << " ";
            }
        }
        // cout << endl;
        return max_prime;
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
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends