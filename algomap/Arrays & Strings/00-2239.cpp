#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest (nums[0]);

        for (int num : nums)    {
            if (abs(num) < abs(closest))    {
                closest = num;
            }
            else if (abs(num) == abs(closest) && closest < num) {
                closest = num;
            }
        }
        return closest;
    }
};

int main()  {
    Solution s;

    vector<int> nums1 = {-4, -2, 1, 4, 8};
    cout << "Answer " << s.findClosestNumber(nums1) << endl;

    vector<int> nums2 = {2, -1, 1};
    cout << "Answer " << s.findClosestNumber(nums2) << endl;

}