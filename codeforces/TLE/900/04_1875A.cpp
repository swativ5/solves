#include <bits/stdc++.h>
using namespace std;

long long jellyfishandundertaleomgg(long long a, long long b, long long n, vector<long long> &tools)
{
    long long seconds = b;
    for (long long tool : tools)
    {
        seconds += min(tool, a - 1);
    }
    return seconds;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> arr(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << jellyfishandundertaleomgg(a, b, n, arr) << "\n";
    }
    return 0;
}