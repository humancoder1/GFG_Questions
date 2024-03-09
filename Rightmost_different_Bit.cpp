#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int count = 0;
        while(max(m , n) > 0){
            // cout << (m & 1) << " " << (n & 1) << endl;
            if((m & 1) != (n & 1)){
                return count+1;
            }
            count++;
            m = m >> 1;
            n = n >> 1;
            // cout << m <<" " << n << endl;
        }
        return -1 ;
        
    }
};

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int num1 , num2;
        cin >> num1 >> num2 ;
        Solution obj1;
        cout << obj1.posOfRightMostDiffBit(num1 , num2) << endl;
    }
    return -1 ;
}