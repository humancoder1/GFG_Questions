//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    int convert_Number(string str1 ,string str2 ){
        long long size1 = str1.size();
        long long size2 = str2.size();
        // cout << size1 << size2 << endl;
        map<char , int> map1;
        int num = 0;
        for(char ch = '0' ; ch < '9' ; ch++){
            map1.insert({ch,num});
            num++;
        }
        
        // for(auto i : map1){
        //     cout <<"key -> " << i.first <<" ; " ;
        //     cout <<"value -> " << i.second << endl ;
        // }

        
        // int index = size1+size2-1;
        int index = size1+size2-1;
        vector<int> product(size1+size2 , 0);
        for(int i = size1-1 ; i >= 0 ; i--){
            int carry = 0 ;
            for(int j = size2-1 ; j >= 0 ; j--){
                product[index] += (carry + (map1[str1[i]] * map1[str2[j]]))%10;
                carry = (map1[str1[i]] * map1[str2[j]])/10;
                index--;
            }
        }
        for(int k = 0 ; k < product.size() ; k++){
            cout << product[k] << " " ;
        }

        // cout << num << endl;
        // if (str[0] == '-'){
        //     return (-num);
        // }
        // return num;
    }

    string convert_String(long long number){
        map<int,char> num_Str;
        num_Str[0] = '0';
        num_Str[1] = '1';
        num_Str[2] = '2';
        num_Str[3] = '3';
        num_Str[4] = '4';
        num_Str[5] = '5';
        num_Str[6] = '6';
        num_Str[7] = '7';
        num_Str[8] = '8';
        num_Str[9] = '9';

        // cout << number << endl;
        int temp = number;
        string ans = "";
        number = abs(number);
        while(number){
            ans = num_Str[number%10] + ans ;
            number /= 10 ;
        }
        if(temp < 0) {
            ans = '-' + ans;
        }
        // cout << ans;
        return ans;
    }
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       convert_Number(s1 , s2);
       return s1;


  
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
    return 0; 
}
// } Driver Code Ends