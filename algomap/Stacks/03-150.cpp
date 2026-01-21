#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        vector<int> stack;
        int size = 0;
        string c;

        for (auto c : tokens)
        {
            if (c == "+")
            {
                int n = stack.size();
                int x = stack[n - 1] + stack[n - 2];
                stack.pop_back();
                stack.pop_back();
                stack.push_back(x);
            }
            else if (c == "-")
            {
                int n = stack.size();
                int x = stack[n - 2] - stack[n - 1];
                stack.pop_back();
                stack.pop_back();
                stack.push_back(x);
            }
            else if (c == "*")
            {
                int n = stack.size();
                int x = stack[n - 1] * stack[n - 2];
                stack.pop_back();
                stack.pop_back();
                stack.push_back(x);
            }
            else if (c == "/")
            {
                int n = stack.size();
                int x = stack[n - 2] / stack[n - 1];
                stack.pop_back();
                stack.pop_back();
                stack.push_back(x);
            }
            else
            {
                stack.push_back(stoi(c));
            }
        }
        return stack.back();
    }
};

int main()
{
    Solution s;
    vector<string> tokens;

    tokens = {"2", "1", "+", "3", "*"};
    cout << s.evalRPN(tokens) << "\n";
}