#include<iostream>
#include<string.h>
using namespace std;

void printNos(int N){
    if(N > 0){
        printNos(N-1);
        cout<< N << " ";
    }
    return;
}
int main(){
    // string num = "21352";
    // for(int i = 0 ; num[i] != '\0' ; i++){
    //     cout << num[i] - '0';
    // }
    // int num = 1;
    // label1: cout << num <<" ";
    // if (num < 10){
    //     num++;
    //     goto label1;
    // }
    // printNos(10);
    int8_t k =200;
    uint8_t b= 7;
    cout <<(int) k << b;
    // int arr[] = {4 , 26 , 85 , 29 , 98 , 64 , 34};
    // cout << *(arr +  (k-1)) << endl;
    auto my_func
}