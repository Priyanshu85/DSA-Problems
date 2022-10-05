// https://leetcode.com/problems/short-encoding-of-words/

#include "/Users/nishant/bits/stdc++.h"
using namespace std;

// BruteForce
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s1(words.begin(), words.end());
        set<string> s2(words.begin(), words.end());
        
        // Helper Set - s2 -> Creating
        for (string s: s1)
            for (int i=1; i<s.size(); i++)
                s2.erase(s.substr(i));
        
        // Counting ans
        int ans=0;
        for (string s: s2) ans+= (s.size()+1);
        
        return ans;
    }
};