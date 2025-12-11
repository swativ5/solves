#include <bits/stdc++.h>
using namespace std;

int maxops(vector<long long> &arr)
{
    int n = arr.size();

    if (n == 1)
    {
        return 0;
    }

    int ops = 0;
    long long cmax = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < cmax)
        {
            ops++;
        }
        else
        {
            cmax = arr[i];
        }
    }

    return ops;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, ai;
        cin >> n;
        vector<long long> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            arr.push_back(ai);
        }

        cout << maxops(arr) << "\n";
    }
    return 0;
}