#include "/Users/nishant/bits/stdc++.h"
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int minVal = INT_MAX;
        int n = triangle.size();
        
        for (int r=1; r<n; r++){
            for (int c=0; c<=r; c++){
                if(c==0) triangle[r][c] += triangle[r-1][c];
                else if(c==r) triangle[r][c] += triangle[r-1][c-1];
                else triangle[r][c] += min(triangle[r-1][c-1], triangle[r-1][c]);
            }
        }
        
        for (int i=0; i<n; i++){
            minVal = min(minVal, triangle[n-1][i]);
        }
        
        return minVal;
    }
};

int main(){

    return 0;
}