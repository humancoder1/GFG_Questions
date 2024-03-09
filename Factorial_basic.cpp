#include<bits\stdc++.h>
using namespace std;

class Solution{
public:
    long long int factorial(int N){
        long long num = 1;
        for(long long i = 1 ; i <= N ; i++){
            num = num * i;
        }
        return num;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        Solution obj;
        cout << obj.factorial(n) << endl;
    }
    return 0;
}


