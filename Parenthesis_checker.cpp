//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int size_n = x.size();
        char open_bracket ;
        char prev_open_brack ;
        char prev_prev_open_brack;
        char close_bracket ;

        int count_square_brack = 0;
        int count_curely_brack = 0;
        int count_normal_brack = 0;
        if (x[0] == ']' || x[0] == '}' || x[0] == ')'){
            return false;
        }

        for(int i = 0 ; i < size_n ; i++){
            if(x[i] == '[' || x[i] == '{' || x[i] == '('){
                prev_prev_open_brack = prev_open_brack;
                prev_open_brack = open_bracket;
                open_bracket = x[i]; 
                if (open_bracket == '[') count_square_brack++;
                else if(open_bracket == '{') count_curely_brack++;
                else if (open_bracket == '(') count_normal_brack++;
            }

            if(open_bracket == '[') {
                close_bracket = ']';
            }
            else if(open_bracket == '{'){
                close_bracket = '}';
            }

            else if(open_bracket == '('){
                close_bracket = ')';
            }
            

            if(x[i] == close_bracket){
                open_bracket = prev_open_brack;
                prev_open_brack = prev_prev_open_brack;

                if(close_bracket == ']') count_square_brack++;
                else if(close_bracket == '}') count_curely_brack++;
                else if(close_bracket == ')') count_normal_brack++;
            }
        }
        // cout <<"Count for square bracket : " << count_square_brack << endl;
        // cout <<"Count for curely bracket : " << count_curely_brack << endl;
        // cout <<"Count for normal bracket : " << count_normal_brack << endl;
        if((count_square_brack % 2 == 0) && (count_curely_brack % 2 == 0) && (count_normal_brack % 2 == 0)){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends