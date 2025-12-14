#include <bits/stdc++.h>
using namespace std;

bool chemistrykindaahh(string s, int n, int k)
{
    if (n == k + 1 || n == 1)
    {
        return true;
    }
    unordered_map<char, long long> freq;
    for (auto c : s)
    {
        freq[c]++;
    }
    long long toberemoved = 0;
    for (auto element : freq)
    {
        if (element.second % 2 != 0)
        {
            toberemoved++;
        }
    }
    if (toberemoved <= k + 1)
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        cout << (chemistrykindaahh(s, n, k) ? "YES" : "NO") << "\n";
    }
    return 0;
}