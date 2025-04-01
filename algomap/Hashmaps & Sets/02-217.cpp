#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int n : nums)  {
            if (set.count(n))   {
                return true;
            }
            set.insert(n);
        }
        return false;
    }
};

int main()  {
    Solution s;

    vector<int> nums = {1,2,3,1};
    cout << "Answer: " << s.containsDuplicate(nums) << endl;

    return 0;
}
