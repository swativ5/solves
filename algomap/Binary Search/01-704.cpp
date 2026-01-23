#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 1) {
            if (nums[0] == target)  {
                return 0;
            }
            return -1;
        }
        int left = 0, right = n - 1;
        while (left <= right) {
        int mid = left + (right - left) / 2;
        if (target == nums[mid])    {
            return mid;
        }   else if (target < nums[mid])    {
            right = mid - 1;
        }   else    {
            left = mid + 1;
        }
       }
       return -1;
    }
};