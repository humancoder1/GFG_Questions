//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count_zero=0 , count_one = 0 , count_two = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 0) count_zero++;

            else if(a[i] == 1) count_one++;

            else if(a[i] == 2) count_two++;
        }

        // cout << "count_zero" << count_zero << endl;
        // cout << "count_one" << count_one << endl;
        // cout << "count_two" << count_two << endl;

        for(int j = 0 ; j <  n ; j++){
            if(count_zero){
                a[j] = 0;
                count_zero--;
            }

            else if (count_one){
                a[j] = 1;
                count_one--;
            }

            else if(count_two){
                a[j] = 2 ;
                count_two--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends