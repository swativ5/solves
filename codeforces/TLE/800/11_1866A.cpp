#include <bits/stdc++.h>
using namespace std;

long long ambitiouskidaww(vector<long long> &arr, long long n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return abs(arr[0]);
    }
    int minn = abs(arr[0]);
    for (auto cn : arr)
    {
        if (abs(cn) < minn)
        {
            minn = abs(cn);
        }
    }
    return minn;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << ambitiouskidaww(arr, n) << "\n";
    return 0;
}