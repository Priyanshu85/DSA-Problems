#include "/Users/nishant/bits/stdc++.h"
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for (char c: n) ans = max(c-'0', ans);
        return ans;
    }
};