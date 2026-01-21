#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // int current_idx = -1;
        // int n = temperatures.size();
        // vector<int> output(n, 0);
        // for (int i = 0; i < n - 1; i++)   {
        //     current_idx = i + 1;
        //     while ( current_idx < n && temperatures[i] >= temperatures[current_idx]) {
        //         current_idx++;
        //     }
        //     if (current_idx == n)   {
        //         continue;
        //     }
        //     output[i] = current_idx - i;
        // }
        // return output;

        int n = temperatures.size();
        vector<int> output(n, 0);
        vector<int> stack;

        for (int i = 0; i < n; i++)  {

            while (!stack.empty() && temperatures[stack.back()] < temperatures[i])    {
                output[stack.back()] = i - stack.back();
                stack.pop_back();
            }
            stack.push_back(i);
        }

        return output;
    }
};

int main()  {
    Solution s;
    vector<int> temperatures, output;

    temperatures = {73,74,75,71,69,72,76,73};
    output = s.dailyTemperatures(temperatures);
    for (auto n: output)    {
        cout << n << " ";
    }
    cout << "\n";
}