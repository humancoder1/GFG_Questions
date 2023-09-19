//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    int start = 0;
        int end = s.size() - 1;

        while(start <= end){
            if((s[start] >= 'a' && s[start] <= 'z') && (s[end] >= 'a' && s[end] <= 'z')){
                if (s[start] != s[end]){
                    return 0;
                }
                start++;
                end--;
            }
            else if((s[start] >= 'A' && s[start] <= 'Z')){
                s[start] += 'a' - 'A';
            }
            else if((s[end] >= 'A' && s[end] <= 'Z')){
                s[end] += 'a' - 'A';
            }
            else if(!(s[start] >= 'a' && s[start] <= 'z')){
                start++;
            }  
            else if(!(s[end] >= 'a' && s[end] <= 'z')){
                end--;
            } 
        }
        return 1;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends