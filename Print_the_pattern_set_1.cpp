#include<iostream>
using namespace std;
void Pattern_set(int num){
    for(int i = 0 ; i < num ; i++){ // for managing the row
        for(int j = num ; j >= 1 ; j--){ // for managing the number
            for(int k = 0 ; k < num - i ; k++ ){
                cout << j << "";
            }
        }
        cout << endl;
    }

}
int main(){
    int n ;
    cin >> n;
    Pattern_set(n);
    return 0;
}