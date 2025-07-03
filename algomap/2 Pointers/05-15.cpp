#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        
        sort(nums.begin(), nums.end());
        int i, j, k, n = nums.size(), sum = 0;

        for (i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            j = i + 1;
            k = n - 1;

            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    output.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j - 1] == nums[j]) j++;
                    while(j < k && nums[k + 1] == nums[k]) k--;
                    // Remove the break here - continue searching for more triplets
                } else if (sum > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }

        return output;
    }
};

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Solution sol; 

    vector<int> nums;
    
    nums = {-1,0,1,2,-1,-4};
    for (auto n: sol.threeSum(nums))   {
        for (auto val : n)  {
            cout << val << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    nums = {0,1,1};
    for (auto n: sol.threeSum(nums))   {
        for (auto val : n)  {
            cout << val << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    nums = {0,0,0};
    for (auto n: sol.threeSum(nums))   {
        for (auto val : n)  {
            cout << val << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}