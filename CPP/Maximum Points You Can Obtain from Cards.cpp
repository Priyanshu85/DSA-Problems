#include "/Users/nishant/bits/stdc++.h"
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum = 0;
        for (int point: cardPoints) total_sum+=point;
            
        int window_size = cardPoints.size()-k;
        int global_min = 0;
        
        for (int i=0; i<window_size; i++) global_min += cardPoints[i];
        
        int local_min = global_min;
        for(int i=1; i<k+1; i++){
            local_min = local_min+cardPoints[i+window_size-1]-cardPoints[i-1];
            
            if (local_min < global_min) global_min = local_min;
        }
        
            
        return total_sum - global_min;
    }
};