#include "/Users/nishant/bits/stdc++.h"

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.length(), n2 = word2.length();
        // dp
        int dp[n1+1][n2+1];
        memset(dp, 0, sizeof(dp));
        
        for (int i=0; i<=n1; i++){
            for (int j=0; j<=n2; j++){
                if (i==0 || j==0) continue;
                if (word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1] + 1;
                else 
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return ((n1+n2)-(2*dp[n1][n2]));
    }
};