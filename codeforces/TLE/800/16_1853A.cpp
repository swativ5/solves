#include <bits/stdc++.h>
using namespace std;

long long desorting(vector<long long> &arr, long long n)
{
    long long i = 0, j = 0, mi = 0, mj = 0, maxd = LONG_MAX;
    for (i = 0; i < n - 1; i++)
    {
        j = i + 1;
        if (arr[j] < arr[i])
        {
            return 0;
        }
        if (maxd > abs(arr[i] - arr[j]))
        {
            maxd = abs(arr[i] - arr[j]);
            mi = i;
            mj = j;
        }
    }

    return floor((arr[mj] - arr[mi]) / 2) + 1;
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
        vector<long long> arr(n, 0);

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << desorting(arr, n) << "\n";
    }
    return 0;
}