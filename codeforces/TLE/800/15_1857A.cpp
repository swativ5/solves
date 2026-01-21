#include <bits/stdc++.h>
using namespace std;

bool arraycoloring(vector<long long> &arr, int n)
{
    long long nodd = 0, neven = 0;
    for (auto element : arr)
    {
        if (element % 2 == 0)
        {
            neven++;
            continue;
        }
        nodd++;
    }
    if (nodd % 2 == 0)
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
        long long n;
        cin >> n;
        vector<long long> arr(n, 0);

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << (arraycoloring(arr, n) ? "YES" : "NO") << "\n";
    }
    return 0;
}