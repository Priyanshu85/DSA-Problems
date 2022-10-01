#include "/Users/nishant/bits/stdc++.h"
using namespace std;

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
		// Adding boundaries of cake to the vectors
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
		// Sort both vectors to find consecutive max difference between cuts.
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
		// Finding max diff.
        long long int max_h = horizontalCuts[0], max_v = verticalCuts[0];
        
        for (int i=1; i<horizontalCuts.size(); i++)
            max_h = (horizontalCuts[i]-horizontalCuts[i-1] > max_h) ? horizontalCuts[i]-horizontalCuts[i-1] : max_h;
        
        for (int i=1; i<verticalCuts.size(); i++)
            max_v = (verticalCuts[i]-verticalCuts[i-1] > max_v) ? verticalCuts[i]-verticalCuts[i-1] : max_v;
        
		// return the max area % 1000000007 as per the question's demand.
        return (max_h*max_v)%1000000007;
    }
};