#include <bits/stdc++.h>
using namespace std;

long long blackslex(int k, int x)
{
    return k * x + 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;

        cout << blackslex(k, x) << "\n";
    }
    return 0;
}