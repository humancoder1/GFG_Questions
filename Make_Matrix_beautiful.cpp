//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C


//Function to find minimum number of operations that are required 
//to make the matrix beautiful.
int findMinOpeartion(int n, int matrix[][n])
{
    
}

//{ Driver Code Starts.

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--)
	{
        int n;
		scanf("%d", &n);
		int matrix[n][n];
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		
        int result = findMinOpeartion(n, matrix);
        printf("%d", result);
		printf("\n");
    }
    return 0;
}

// } Driver Code Ends