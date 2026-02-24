#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (int coin : coins)
            {
                if (coin <= i)
                {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return (dp[amount] == amount + 1) ? -1 : dp[amount];
    }
};

int main()
{
    Solution s;
    vector<int> coins;
    int amount;

    coins = {1, 2, 5};
    amount = 11;
    cout << s.coinChange(coins, amount) << "\n";

    coins = {2};
    amount = 3;
    cout << s.coinChange(coins, amount) << "\n";

    coins = {1};
    amount = 0;
    cout << s.coinChange(coins, amount) << "\n";
}