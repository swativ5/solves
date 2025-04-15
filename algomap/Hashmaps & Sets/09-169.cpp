#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = 0, majority = 0;
        for (int num : nums) {
            if (majority == 0)  {
                result = num;
            }
            if (result == num)  {
                majority++;
            }   else {
                majority--;
            }
        }
        return result;
    }
};


int main()  {
    Solution s;
    vector<int> nums;

    nums = {3,2,3};
    cout << "Answer: " << s.majorityElement(nums) << endl;

    nums = {2,2,1,1,1,2,2};
    cout << "Answer: " << s.majorityElement(nums) << endl;

    return 0;
}
