// https://leetcode.com/problems/maximum-erasure-value/

#include "/Users/nishant/bits/stdc++.h"
using namespace std;

// Solution gave TLE
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map <int, int> m;
        int max_global = 0, max_local=0;
        
        for (int i=0; i<nums.size(); i++){
            if (m[nums[i]]<1) { // If occur once
                m[nums[i]]++; // track on map
                max_local += nums[i]; // increment local maxima
            }
            
            else if (m[nums[i]]==1) { // If repeats
                i-=m.size();
                m.clear();
                max_local = 0;
            }
            
            if (max_local>max_global) max_global=max_local;
        }
        
        return max_global;
    }
};


// Sliding Window and Map Approach
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map <int, int> m;
        int n = nums.size();
        int global_max = 0, local_sum=0;
        int start=0, end=0;
        
        while(end<n){
            local_sum += nums[end];
            
            while (m.find(nums[end])!=m.end()){
                local_sum-=nums[start];
                m.erase(nums[start]);
                start++;
            }
            
            global_max = max(global_max, local_sum);
            m[nums[end]]=end;
            end++;
        }
        
        return global_max;
    }
};