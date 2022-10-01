// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include "/Users/nishant/bits/stdc++.h"
using namespace std;


class Solution {
public:
    vector<int> idx; // low and high storing
    
    void sumSearch(vector<int>& nums, int target, int low, int high){
        if (nums[low]+nums[high]==target){ // base case -> got ans
            idx.push_back(low+1);
            idx.push_back(high+1);
            return;
        }
        
        else if (nums[low]+nums[high]>target) sumSearch(nums, target, low, high-1);
        else if (nums[low]+nums[high]<target) sumSearch(nums, target, low+1, high);
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        sumSearch(numbers, target, 0, numbers.size()-1);
        return idx;
    }
};