#include <bits/stdc++.h>
using namespace std;

int optshifts(int n, string s)
{
    vector<int> ones;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones.push_back(i);
        }
    }

    if (ones.size() == n)
    {
        return 0;
    }

    int maxGap = 0;
    int m = ones.size();

    for (int i = 0; i < m; i++)
    {
        int gap;
        if (i == m - 1)
        {
            gap = n - ones[i] + ones[0];
        }
        else
        {
            gap = ones[i + 1] - ones[i];
        }
        maxGap = max(maxGap, gap);
    }

    return maxGap - 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        cout << optshifts(n, s) << "\n";
    }
    return 0;
}