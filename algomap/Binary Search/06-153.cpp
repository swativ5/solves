#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1, mid;
        while (left < right)    {
            mid = left + (right - left) / 2;
            if (nums[right] < nums[mid])   {
                left = mid + 1;
            }   else {
                right = mid;
            }
        }
        return nums[left];
    }
};

int main()  {
    Solution s;
    vector<int> nums;

    nums = {3,4,5,1,2};
    cout << s.findMin(nums) << "\n";
}