#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output;
    }
};

int main()  {
    Solution s;
    vector<int> output;

    vector<int> nums1 = {1,2,3,4};
    output = s.productExceptSelf(nums1);
    cout << "Answer: ";
    for (int n : output) {
        cout << n << " ";
    }
    cout << endl;

}
