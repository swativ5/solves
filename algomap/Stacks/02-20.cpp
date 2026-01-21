#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> stack;
        unordered_map<char, char> valids = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        for (auto c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                stack.push_back(c);
            }
            else
            {
                if (stack.empty())
                {
                    return false;
                }
                char popped = stack.back();
                stack.pop_back();
                if (valids[popped] != c)
                {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};

int main()
{
    Solution sol;
    string s;

    s = "()";
    cout << sol.isValid(s) << "\n";

    s = "()[]{}";
    cout << sol.isValid(s) << "\n";

    s = "(]";
    cout << sol.isValid(s) << "\n";

    s = "([])";
    cout << sol.isValid(s) << "\n";

    s = "([)]";
    cout << sol.isValid(s) << "\n";
}