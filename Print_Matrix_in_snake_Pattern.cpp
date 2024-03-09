//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int size = matrix[0].size();
        vector<int> ans;
        int iter1 , iter2 ;
        for(int i = 0 ; i < size ; i++){
            iter1 = 0;
            iter2 = size-1;
            while(i%2 == 0 && iter1 < size){
                ans.push_back(matrix[i][iter1]);
                iter1++;
            }
            while(i%2 != 0 && iter2 >= 0){
                ans.push_back(matrix[i][iter2]);
                iter2--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends