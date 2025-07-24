#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0)    {
            return 0;
        }
        int ncoins = coins.size();
        if (ncoins == 0)    {
            return -1;
        }
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i < amount + 1; i++)    {
            for (int coin: coins)   {
                if (coin <= i && dp[i - coin] != INT_MAX)  {
                    dp[i] = min(dp[i - coin] + 1, dp[i]);
                }
            }
        }
        if (dp[amount] == INT_MAX)  {
            return -1;
        }
        return dp[amount];
    }
};

int main()  {
    Solution sol;
    vector<int> coins;
    int amount;

    coins = {1, 2, 5};
    amount = 11;
    cout << sol.coinChange(coins, amount) << "\n";

    coins = {2};
    amount = 3;
    cout << sol.coinChange(coins, amount) << "\n";

    coins = {1};
    amount = 0;
    cout << sol.coinChange(coins, amount) << "\n";
}