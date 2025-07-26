#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        // for (int i = 0; i <= m; i++) {
        //     dp[i][0] = 1;
        // }
        // for (int j = 0; j <= n; j++) {
        //     dp[0][j] = 1;
        // }
        
        // // Fill the dp table
        // for (int i = 1; i < m; i++) {
        //     for (int j = 1; j < n; j++) {
        //         dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        //     }
        // }
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        
        // return dp[m - 1][n - 1];

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 1));
        // dp[0][0] = 1;
        // for (int i = 1; i < m; i++) {
        //     dp[0][i] = dp[0][i - 1] + 1;
        // }
        // for (int i = 1; i < n; i++) {
        //     dp[i][0] = dp[i - 1][0] + 1;
        // }
        // cout << "hi" << "\n";
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main()  {
    Solution sol;
    int m, n;

    m = 3;
    n = 7;
    cout << "hi" << "\n";
    cout << sol.uniquePaths(m, n) << "\n";
    cout << "hi" << "\n";

    m = 3;
    n = 2;
    cout << sol.uniquePaths(m, n) << "\n";
}