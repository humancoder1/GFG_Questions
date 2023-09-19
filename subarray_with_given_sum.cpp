#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> sub_Array_Sum(vector<int>arr, int n, long long s){
        vector<int> ans;
        long long sum_s = 0;
        int index_1 , index_2;
       
        for(int i = 0 ; i < 5 ; i++){
            sum_s = 0 ;

            for (int j = i ; j < 5 ; j++){
                sum_s += arr[j];

                if (sum_s == s){
                    index_1 = i+1;
                    index_2 = j+1;
                    ans = {index_1 , index_2};
                    return ans;
                }
            }
        }      
    }
};

int main(){
    vector<int> array_1 ;
    int n;
    long long key;
    cin >> n >> key;
    for(int ele = 0 ; ele < n ; ele++){
        cin >> array_1[ele];
    }
    Solution obj1;
    vector<int> ans_index = obj1.sub_Array_Sum(array_1,n,key);
    for (int num = 0 ; num < ans_index.size() ; num++){
        cout << ans_index[num] << " ";
    }
    return 0;
}
