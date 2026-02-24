#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> LIS(n, 1);

        for (int i = n - 1; i > -1; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] < nums[j])
                {
                    LIS[i] = max(LIS[i], 1 + LIS[j]);
                }
            }
        }
        int ans = 0;
        for (int x : LIS)
        {
            ans = max(ans, x);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums;

    nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << s.lengthOfLIS(nums) << "\n";

    nums = {0, 1, 0, 3, 2, 3};
    cout << s.lengthOfLIS(nums) << "\n";

    nums = {7, 7, 7, 7, 7, 7, 7};
    cout << s.lengthOfLIS(nums) << "\n";
}