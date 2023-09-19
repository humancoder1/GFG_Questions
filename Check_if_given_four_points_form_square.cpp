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
    int fourPointSquare(vector<vector<int>> points) {
        // code here // (0,0) (1,0) (0,1) (1,1)

        int x1 = points[0][0] , x2 = points[1][0] , x3 = points[2][0] , x4 = points[3][0];
        int y1 = points[0][1] , y2 = points[1][1] , y3 = points[2][1] , y4 = points[3][1];

        // if(x1 == 0 && x2 == 0 &&  x3 == 0 && x4 == 0 && y1 == 0 &&  y2 == 0 && y3 == 0 && y4 == 0){
        //     return 0;
        // }

        if(x1 == x2 &&  x2 == x3 && x3 == x4  && y1 == y2 && y2 == y3 && y3 == y4){
            return 0;
        }

        float dist1 = distance(x1 , x2 , y1 , y2);
        float dist2 = distance(x1 , x3 , y1 , y3);
        float dist3 = distance(x1 , x4 , y1 , y4);

        if(dist1 == dist2 && 2*dist2 == dist3 && \
        2 * distance(x2 , x4 , y2 , y4) == distance(x2 ,x3 ,y2 ,y3)){
            return 1;
        }
        if(dist1 == dist3 && 2*dist3 == dist2 && \
        2 * distance(x2, x3 , y2 , y3) == distance(x2 , x4 ,y2, y4)){
            return 1;
        }
        if(dist2 == dist3 && 2*dist2 == dist1 && \
        2 * distance(x3 , x2 , y3  , y2) == distance(x3 , x4 , y3 , y4)){
            return 1;
        }

        return false;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> points(4, vector<int>(2));
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 2; j++) cin >> points[i][j];
        Solution ob;
        cout << ob.fourPointSquare(points) << "\n";
    }
}
// } Driver Code Ends