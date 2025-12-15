#include <bits/stdc++.h>
using namespace std;

pair<vector<long long>, vector<long long>> unitedwesadarewefr(vector<long long> a, long long n)
{
    if (n == 0 || n == 1)
    {
        return {{}, {}};
    }
    long long maxn = a[0];
    for (auto cn : a)
    {
        maxn = max(maxn, cn);
    }

    vector<long long> indexes;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] == maxn)
        {
            indexes.push_back(i);
        }
    }

    if (indexes.size() == n)
    {
        return {{}, {}};
    }

    vector<long long> b;
    for (auto cn : a)
    {
        if (cn != maxn)
        {
            b.push_back(cn);
        }
    }
    vector<long long> c(indexes.size(), maxn);
    return {b, c};
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pair<vector<long long>, vector<long long>> p = unitedwesadarewefr(a, n);

        vector<long long> b = p.first;
        vector<long long> c = p.second;
        if (p.first.empty())
        {
            cout << -1 << "\n";
            continue;
        }

        cout << b.size() << " " << c.size() << "\n";
        for (auto cn : b)
        {
            cout << cn << " ";
        }
        cout << "\n";
        for (auto cn : c)
        {
            cout << cn << " ";
        }
        cout << "\n";
    }
    return 0;
}