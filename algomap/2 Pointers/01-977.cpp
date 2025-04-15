#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // if (nums.size() == 0 || nums.size() == 1)   {
        //     return nums;
        // }

        // int mid = -1;
        // for (int i = 0; i < nums.size() - 1; i++)   {
        //     if (nums[i] < 0 && nums[i + 1] > 0) {
        //         mid = i;
        //         break;
        //     }
        // }

        // vector<int> result;
        // int left = mid, right = mid + 1;
        // int lefts, rights;
        // while (left >= 0 && right < nums.size())    {
        //     lefts = nums[left] * nums[left];
        //     rights = nums[right] * nums[right];
        //     if (lefts <= rights)    {
        //         result.push_back(lefts);
        //         left--;
        //     }   else {
        //         result.push_back(rights);
        //         right++;
        //     }
        // }
        // while (left >= 0)    {
        //     lefts = nums[left] * nums[left];
        //     result.push_back(lefts);
        //     left--;
        // }
        // while (right < nums.size()) {
        //     rights = nums[right] * nums[right];
        //     result.push_back(rights);
        //     right++;
        // }

        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1, pos = n - 1;
        while (left <= right)   {
            if (abs(nums[left]) >= abs(nums[right]))    {
                result[pos] = nums[left] * nums[left];
                left++;
                pos--;
                // result.insert(result.begin(), nums[left] * nums[left]);
                // left++;
            }   else {
                result[pos] = nums[right] * nums[right];
                right--;
                pos--;
                // result.insert(result.begin(), nums[right] * nums[right]);
                // right--;
            }
        }
        return result;
    }
};

int main()  {
    Solution s;
    vector<int> nums, result;

    nums = {-4,-1,0,3,10};
    result = s.sortedSquares(nums);
    for (int num : result)    {
        cout << num << " ";
    }
    cout << endl;

    nums = {-7,-3,2,3,11};
    result = s.sortedSquares(nums);
    for (int num : result)    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
