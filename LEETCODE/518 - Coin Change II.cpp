// https://leetcode.com/problems/coin-change-ii/

class Solution {
public:
    int change(int a, vector<int>& coins) {
        int n = coins.size();
        int dp[n+1][a+1];
        
        for(int i=1; i<n+1; i++)    dp[i][0] = 1;
        for(int j=1; j<a+1; j++)    dp[0][j] = 0;
        dp[0][0] = 1;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<a+1; j++){
                if(coins[i-1] <= j)
                    dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][a];
    }
};