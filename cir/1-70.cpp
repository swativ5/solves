#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        vector<int> dp(n);
        dp[0] = 1; dp[1] = 2;
        for (int i = 2; i < n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n - 1];
    }
};

int main()  {
    Solution s;
    int n;

    n = 1;
    cout << s.climbStairs(n) << "\n";

    n = 2;
    cout << s.climbStairs(n) << "\n";

    n = 3;
    cout << s.climbStairs(n) << "\n";

}