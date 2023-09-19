#include<iostream>
using namespace std;
int main(){
    int n = 5 ;
    int arr[] = {1,2,3,5};
    int sum1 = 0;

    for (int i = 0 ; i < n-1 ; i++){
        sum1 += arr[i];


    }
    int sum2 =  0;
    for(int  j = 1 ; j < n+1 ; j++ ){
        sum2 += j;

    }
    cout << sum1 << endl ;
    cout << sum2 << endl ;
    return 0;
}
