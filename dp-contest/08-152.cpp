#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = nums[0], maxp = nums[0], minp = nums[0];

        for (int i = 1; i < nums.size(); i++)   {
            if (nums[i] < 0)    {
                swap(maxp, minp);
            }

            maxp = max(nums[i], maxp * nums[i]);
            minp = min (nums[i], minp * nums[i]);
            result = max(result, maxp);
        }

        return result;
    }

};

int main()  {
    Solution sol;
    vector<int> nums;

    nums = {2, 3, -2, 4};
    cout << sol.maxProduct(nums) << "\n";

    nums = {-2,0,-1};
    cout << sol.maxProduct(nums) << "\n";
}