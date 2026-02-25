#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numDecodings(string s)
    {
        int n = s.size();
        if (n == 0 || s[0] == '0')
        {
            return 0;
        }
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++)
        {
            if (s[i - 1] != '0')
            {
                dp[i] = dp[i - 1];
            }

            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6' && s[i - 1] >= '0'))
            {
                dp[i] += dp[i - 2];
            }
            // for (int x : dp)
            // {
            //     cout << x << " ";
            // }
            // cout << "\n";
        }
        return dp[n];
    }
};
// 2, 2, 6, 1, 2
// 2, 26, 1, 2
// 22, 6, 1, 2
// 2, 2, 6, 12
// 2, 26, 12
// 22, 6, 12

// 2   2   6   1   2
// 1   1+1 2+1 3   3

int main()
{
    Solution s;
    string str;

    str = "12";
    cout << s.numDecodings(str) << "\n";

    str = "226";
    cout << s.numDecodings(str) << "\n";

    str = "06";
    cout << s.numDecodings(str) << "\n";
}