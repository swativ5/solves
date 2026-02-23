#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> dp(amount, coins[n]);
        for (int coin: coins)  {
            dp[coin - 1] = 1;
        }
        for (int i = coins[0]; i < amount; i++) {
            for (int j = n - 1; j >= 0; j++)    {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
};
1 2 5

1 2 3 4 5 6 7 8 9 10
1 1 2 2 1 2 2 3