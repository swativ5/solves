#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        vector<int> dp(n, 1);
        int lis = 1;
        // 1 2 4 3  n = 4
        for (int i = n - 1; i >= 0; i--)    {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] < nums[j])  {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            lis = max(lis, dp[i]);
        }
        return lis;
    }
};

int main()  {
    Solution sol;
    vector<int> nums;

    nums = {4,10,4,3,8,9};
    cout << sol.lengthOfLIS(nums) << "\n";

    nums = {10,9,2,5,3,7,101,18};
    cout << sol.lengthOfLIS(nums) << "\n";

    nums = {0,1,0,3,2,3};
    cout << sol.lengthOfLIS(nums) << "\n";

    nums = {7,7,7,7,7,7,7};
    cout << sol.lengthOfLIS(nums) << "\n";   
}