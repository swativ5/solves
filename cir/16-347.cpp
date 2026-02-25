#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        for (int x : nums)
        {
            map[x] += 1;
        }

        int n = nums.size();

        vector<vector<int>> intermediate(n + 1, vector<int>());
        for (auto pair : map)
        {
            intermediate[pair.second].push_back(pair.first);
        }

        vector<int> res;
        for (int i = n; i >= 0 && res.size() < k; i--)
        {
            for (int x : intermediate[i])
            {
                if (res.size() < k)
                {
                    res.push_back(x);
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    int k;

    nums = {1, 1, 1, 2, 2, 3};
    k = 2;
    for (int x : s.topKFrequent(nums, k))
    {
        cout << x << " ";
    }
    cout << "\n";

    nums = {1};
    k = 1;
    for (int x : s.topKFrequent(nums, k))
    {
        cout << x << " ";
    }
    cout << "\n";

    nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    k = 2;
    for (int x : s.topKFrequent(nums, k))
    {
        cout << x << " ";
    }
    cout << "\n";
}