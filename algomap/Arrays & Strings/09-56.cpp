#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;

        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        int i = 0;
        while (i < intervals.size())    {
            int start_i = intervals[i][0], end_i = intervals[i][1];
            int j = i;

            while(j < n && end_i >= intervals[j][0]) {
                end_i = max(end_i, intervals[j][1]);
                j++;
            }
            output.push_back({start_i, end_i});
            i = j;
        }
        return output;
    }
};

int main()  {
    Solution s;
    vector<vector<int>> output;

    vector<vector<int>> intervals1 = {{1,3},{2,6},{8,10},{15,18}};
    output = s.merge(intervals1);
    cout << "Answer: ";
    for (vector<int> range: output) {
        cout << "[" << range[0] << "," << range[1] << "]" << " ";
    }
    cout << endl;
}
