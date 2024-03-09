#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK_optimal(vector<int> a , long long k){
    int p1 = 0 , p2 = 0 ;
    long long sum = a[p1];
    int maxlen = 0;
    // int ele;
    int n = a.size();
    while((p1 >= p2) && (p1 < n)){
        if(sum == k){
            maxlen = max(maxlen , (p1-p2+1));
        }
        if (sum <= k && p1 < n){
            p1++;
            sum += a[p1];
        }
        else if(sum > k){
            sum -= a[p2];
            p2++;
        }
    }
    return maxlen;
}


// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     map<long long , int> map_sum;
//     long long sum = 0;
//     long long maxlen = 0;
//     for(int i = 0 ; i < a.size() ; i++){
//         sum += a[i];
//         if(sum == k){
//             maxlen = max(maxlen , i+1);
//         }
//         long long rev_sum = sum - k;
//         if(map_sum.find(rev_sum) != map_sum.end()){
//             maxlen = max(maxlen , i-map_sum[rev_sum]);
//         }
//         if(map_sum.find(sum) == map_sum.end()){
//             map_sum[sum] = i;
//         }
//     }
//     return maxlen;
// }


int main(){
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        int n , k;
        cin >> n >> k;
        vector<int> arr;
        int ele;
        for(int i = 0 ; i < n ; i++){
            cin >> ele;
            arr.push_back(ele);
        }

        cout << longestSubarrayWithSumK_optimal(arr, k) << endl;
    }
    return 0;
}