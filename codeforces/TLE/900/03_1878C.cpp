#include <bits/stdc++.h>
using namespace std;

bool vasilijeoncrack(long long n, long long k, long long x)
{
    long long smallestsum = (k * (k + 1)) / 2;
    long long largestsum = k * (n - k + 1 + n) / 2;
    if (x >= smallestsum && x <= largestsum)
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
        long long x, n, k;
        cin >> x >> n >> k;

        cout << (vasilijeoncrack(x, n, k) ? "YES" : "NO") << "\n";
    }
    return 0;
}