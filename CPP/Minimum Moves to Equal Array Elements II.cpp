#include "/Users/nishant/bits/stdc++.h"
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid_val = nums[nums.size()/2];
        
        int ans = 0;
        
        for (int num: nums) ans+= abs(mid_val-num);
        
        return ans;
    }
};