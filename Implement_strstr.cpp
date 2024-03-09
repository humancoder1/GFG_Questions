//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int strstr(string s , string x){
        //code here.
        for(int i = 0 ; i < s.size() ; i++){
            int letter_count = 0 ;
            for(int j = 0 ; j < x.size() ; j++){
                if(x[j] == s[i+j]){
                    letter_count++;
                    continue;
                }
                else{
                    break;
                }
            }
            if(letter_count == x.size()){
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        string x;
        getline (cin , x);
        Solution ob;
        cout <<ob.strstr (s , x) << endl;
    }
    return 0;
}

