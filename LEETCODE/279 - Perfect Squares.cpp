// https://leetcode.com/problems/perfect-squares/

class Solution {
public:
    int numSquares(int n) {
        int sr = sqrt(n);
        int dp[sr+1][n+1];
        memset(dp, 0, sizeof(dp));
        
        for(int j=1; j<n+1; j++)     dp[1][j] = j;
        for(int i=1; i<sr+1; i++)    dp[i][1] = 1;
        dp[1][1] = 1;
        
        for(int i=2; i<sr+1; i++){
            for(int j=2; j<n+1; j++){
                if((i*i) <= j)
                    dp[i][j] = min(1+dp[i][j-(i*i)], dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        // for(int i=0; i<sr+1; i++){
        //     for(int j=0; j<n+1; j++)
        //         cout << dp[i][j] << " ";
        //     cout << endl;
        // }
        
        return dp[sr][n];
    }
};