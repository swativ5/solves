#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int dp[3] = {0, 1, 1};
        for (int i = 3; i <= n; i++)    {
            dp[i % 3] = dp[(i - 1) % 3] + dp[(i - 2) % 3] + dp[(i - 3) % 3];
        }
        // if (n == 0) {
        //     return 0;
        // }   else if (n == 1)    {
        //     return 1;
        // }   else if (n == 2)    {
        //     return 1;
        // }
        // vector<int> dp(n + 1, 0);
        // dp[1] = 1;
        // dp[2] = 1;
        // for (int i = 3; i <= n; i++)    {
        //     dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        // }
        return dp[n % 3];
    }
};

int main()  {
    Solution sol;
    int n;

    n = 4;
    cout << sol.tribonacci(n) << "\n";

    n = 25;
    cout << sol.tribonacci(n) << "\n";
}