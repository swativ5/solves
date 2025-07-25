#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[n] = true;
        
        for (int i = n - 1; i >= 0; i--) {
            for (auto word : wordDict) {
                int w = word.size();
                if (i + w <= n && s.substr(i, w) == word) {
                    dp[i] = dp[i + w];
                    if (dp[i]) {
                        break;
                    }
                }
            }
        }
        return dp[0];
    }
};

int main() {
    Solution sol;
    string s;
    vector<string> wordDict;

    s = "leetcode";
    wordDict = {"leet","code"};
    cout << sol.wordBreak(s, wordDict) << "\n";

    s = "applepenapple";
    wordDict = {"apple","pen"};
    cout << sol.wordBreak(s, wordDict) << "\n";

    s = "catsandog";
    wordDict = {"cats","dog","sand","and","cat"};
    cout << sol.wordBreak(s, wordDict) << "\n";
}