#include <bits/stdc++.h>
using namespace std;

int lineTrip(int n, int x, vector<int> arr)
{
    int last = arr[n - 1] + 2 * (x - arr[n - 1]);
    arr.push_back(last);
    arr.insert(arr.begin(), 0);
    int fuel = 0;
    int minfuel = 0;
    for (int i = 1; i < n + 2 - 1; i++)
    {
        fuel = max(arr[i] - arr[i - 1], arr[i + 1] - arr[i]);
        minfuel = max(minfuel, fuel);
    }
    return minfuel;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << lineTrip(n, x, arr) << "\n";
    }
    return 0;
}