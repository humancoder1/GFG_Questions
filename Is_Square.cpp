//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    float distance(int n1 , int n2 , int n3 , int n4){
        float ans = (n1-n2)*(n1-n2) + (n3-n4)*(n3-n4);
        return ans;
    }
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        // code here // (0,0) (1,0) (0,1) (1,1)




        if(x1 == x2 &&  x2 == x3 && x3 == x4  && y1 == y2 && y2 == y3 && y3 == y4){
            return "No";
        }

        float dist1 = distance(x1 , x2 , y1 , y2);
        float dist2 = distance(x1 , x3 , y1 , y3);
        float dist3 = distance(x1 , x4 , y1 , y4);

        if(dist1 == dist2 && 2*dist2 == dist3 && \
        2 * distance(x2 , x4 , y2 , y4) == distance(x2 ,x3 ,y2 ,y3)){
            return "Yes";
        }
        if(dist1 == dist3 && 2*dist3 == dist2 && \
        2 * distance(x2, x3 , y2 , y3) == distance(x2 , x4 ,y2, y4)){
            return "Yes";
        }
        if(dist2 == dist3 && 2*dist2 == dist1 && \
        2 * distance(x3 , x2 , y3  , y2) == distance(x3 , x4 , y3 , y4)){
            return "Yes";
        }

        return "No";

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        Solution ob;
        cout << ob.isSquare(x1,y1,x2,y2,x3,y3,x4,y4) << endl;
    }
    return 0;
}
// } Driver Code Ends