#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        // traverse through array
        // dp[i] = max(dp[i-1], nums[i] + dp[i-2])
        // skip -> get prev rob value + preserve adjacenecy
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }
        return dp[n - 1];
    }
};


int main()  {
    Solution s;
    vector<int> nums;

    nums = {1,2,3,1};
    cout << s.rob(nums) << "\n";

    nums = {2,7,9,3,1};
    cout << s.rob(nums) << "\n";

    nums = {2,1,1,2};
    cout << s.rob(nums) << "\n";
}