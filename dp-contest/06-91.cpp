#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0')  {
            return 0;
        }
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            // one
            if (s[i - 1] != '0')  {
                dp[i] = dp[i - 1];
            }

            // two
            if ((s[i - 2] == '1') || (s[i - 2] == '2' && s[i - 1] <= '6')) {
                dp[i] = dp[i] + dp[i - 2];
            }
        }
        return dp[n];
    }
};

int main()  {
    Solution sol;
    string s;

    s = "12";
    cout << sol.numDecodings(s) << "\n";

    s = "226";
    cout << sol.numDecodings(s) << "\n";
}