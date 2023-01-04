// https://leetcode.com/problems/integer-break/

class Solution {
    int rec(int n, int dp[]){
        if(n<5)
            return n;
        if(dp[n] != -1)
            return dp[n];
        
        return dp[n] = 3*rec(n-3, dp);
    }
public:
    int integerBreak(int n) {
        if(n==2)        return 1;
        else if(n==3)   return 2;
        
        int dp[n+1];
        memset(dp, -1, sizeof(dp));
        
        return rec(n, dp);
    }
};