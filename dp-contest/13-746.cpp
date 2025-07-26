#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return cost[0];
        }
        vector<int> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; i--)    {
            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        }
        return min(dp[0], dp[1]);
    }
};

int main()  {
    Solution sol;
    vector<int> cost;

    cost = {10,15,20};
    cout << sol.minCostClimbingStairs(cost) << "\n";
}