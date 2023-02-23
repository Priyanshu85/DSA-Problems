// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

class Solution {
    int dfs(vector<vector<int>>& m, vector<vector<int>>& dp, int i, int j, int pre){
        if(i<0 or i>=m.size() or j<0 or j>=m[i].size() or pre >= m[i][j]){
            return 0;
        }
        
        if(dp[i][j]){
            return dp[i][j];
        }
        
        int l = dfs(m, dp, i, j-1, m[i][j]);
        int r = dfs(m, dp, i, j+1, m[i][j]);
        int u = dfs(m, dp, i-1, j, m[i][j]);
        int d = dfs(m, dp, i+1, j, m[i][j]);
        
        return dp[i][j] = max({l, r, u, d}) + 1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int mx = 0, n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mx = max(mx, dfs(matrix, dp, i, j, -1));
            }
        }
        
        return mx;
    }
};