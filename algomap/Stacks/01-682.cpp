#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        vector<int> ops;

        for (auto c : operations)
        {
            if (c == "C")
            {
                ops.pop_back();
            }
            else if (c == "D")
            {
                ops.push_back(ops.back() * 2);
            }
            else if (c == "+")
            {
                ops.push_back(ops.back() + (*(ops.end() - 2)));
            }

            else
            {
                ops.push_back(stoi(c));
            }
        }

        int sum = 0;
        for (auto n : ops)
        {
            sum += n;
        }

        return sum;
    }
};

int main()
{
    Solution s;
    vector<string> operations;

    operations = {"5", "2", "C", "D", "+"};
    cout << s.calPoints(operations) << "\n";

    operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << s.calPoints(operations) << "\n";

    return 0;
}