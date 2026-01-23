#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, mid = 0;
    bool found = false;
    while (left <= right)    {
        mid = left + (right - left)/2;
        if (nums[mid] == target)    {
            return mid;
        }   else if (nums[mid] > target)    {
            right = mid - 1;
        }   else    {
            left = mid + 1;
        }
    }
    return left;
}
};

int main()  {
    Solution s;
    vector<int> nums;
    int target;

    nums = {1,3,5,6};
    target = 5;
    cout << s.searchInsert(nums, target) << "\n";


}