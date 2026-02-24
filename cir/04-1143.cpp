#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        // int m = text1.size();
        // int n = text2.size();
        // vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        // for (int i = 0; i < m; i++)    {            
        //     for (int j = 0; j < n; j++)    {
        //         dp[i + 1][j + 1] = (text1[i] == text2[j]) ? (dp[i][j] + 1) : (max(dp[i + 1][j], dp[i][j + 1]));
        //     }
        // }
        // return dp[m][n];
        int m = text1.size(), n = text2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dp[i + 1][j + 1] = (text1[i] == text2[j]) ? (dp[i][j] + 1) : (max(dp[i + 1][j], dp[i][j + 1]));
            }
        }
        return dp[m][n];
    }
};

int main()  {
    Solution s;
    string text1, text2;

    text1 = "abcde"; text2 = "ace";
    cout << s.longestCommonSubsequence(text1, text2) << "\n";

    text1 = "abc"; text2 = "abc";
    cout << s.longestCommonSubsequence(text1, text2) << "\n";

    text1 = "abc"; text2 = "def";
    cout << s.longestCommonSubsequence(text1, text2) << "\n";
}