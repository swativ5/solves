#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())   {
            return {};
        }
        vector<string> output = {};
        int i = 0;
        int n = nums.size();

        while (i < n)   {
            int j = i;

            while (j + 1 < n && nums[j] + 1 == nums[j + 1]) {
                j++;
            }

            if (nums[i] == nums[j]) {
                output.push_back(to_string(nums[i]));
            }   else {
                output.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            }

            i = j + 1;
        }

        return output;
    }
};

int main()  {
    Solution s;
    vector<string> output;

    vector<int> nums1 = {0,1,2,4,5,7};
    output = s.summaryRanges(nums1);
    cout << "Answer: ";
    for (string range : output) {
        cout << range << " ";
    }
    cout << endl;


    vector<int> nums2 = {0,2,3,4,6,8,9};
    output = s.summaryRanges(nums2);
    cout << "Answer: ";
    for (string range : output) {
        cout << range << " ";
    }
    cout << endl;
    return 0;
}
