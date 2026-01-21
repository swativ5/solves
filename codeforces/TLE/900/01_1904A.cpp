#include <bits/stdc++.h>
using namespace std;

long long forked(pair<long long, long long> &king, pair<long long, long long> &queen, int a, int b)
{
    long long result = 0;
    set<pair<long long, long long>> kings;
    set<pair<long long, long long>> queens;
    vector<pair<long long, long long>> directions = {{a, b}, {b, a}, {-a, b}, {-b, a}, {-b, -a}, {-a, -b}, {a, -b}, {b, -a}};

    for (auto p : directions)
    {
        kings.insert({king.first + p.first, king.second + p.second});
        queens.insert({queen.first + p.first, queen.second + p.second});
    }
    for (auto k : kings)
    {
        if (queens.count(k))
        {
            result++;
        }
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        pair<long long, long long> king;
        pair<long long, long long> queen;

        cin >> king.first >> king.second;
        cin >> queen.first >> queen.second;

        cout << forked(king, queen, a, b) << "\n";
    }
    return 0;
}