#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        int n = s.size();
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int digit = s[i] - '0';
            a += (digit ^ (i % 2)) ? 1 : 0;
            b += (digit ^ (1 - (i % 2))) ? 1 : 0;
        }
        return min(a, b);
    }
};

int main()
{
    Solution sol;
    string s;

    s = "0100";
    cout << sol.minOperations(s) << "\n";

    s = "10";
    cout << sol.minOperations(s) << "\n";

    s = "1111";
    cout << sol.minOperations(s) << "\n";

    cout << ((bool)s[0] ^ 0) << "\n";
}