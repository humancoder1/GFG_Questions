//{ Driver Code Starts
#include<stdio.h>
void printPat(int n);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);
    printf("\n");
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    int num;
    int count = n ;
    for(int i = 0 ; i < n ; i++){
        num = n;
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < count ; k++){
                printf("%d " , num);
            }
            num--;
        }
        count--;
        printf("$");
    }
    
}