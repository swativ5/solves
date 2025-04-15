#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int result = 0, local_result = 0;
        for (int num : set) {
            if (set.count(num - 1) == 0)    {
                local_result = 0;
                while(set.count(num + local_result))    {
                    local_result++;
                }
            }
            result = max(result, local_result);
        }
        return result;
    }
};

int main()  {
    Solution s;
    vector<int> nums;

    nums = {100,4,200,1,3,2};
    cout << "Answer: " << s.longestConsecutive(nums) << endl;

    nums = {0,3,7,2,5,8,4,6,0,1};
    cout << "Answer: " << s.longestConsecutive(nums) << endl;

    nums = {1,0,1,2};
    cout << "Answer: " << s.longestConsecutive(nums) << endl;
}
