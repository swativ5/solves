#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); i++)   {
            string s = strs[i];
            sort(s.begin(), s.end());
            map[s].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (auto& entry: map)   {
            result.push_back(entry.second);
        }
        return result;
    }
};

int main()  {
    Solution s;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result;

    result = s.groupAnagrams(strs);
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
