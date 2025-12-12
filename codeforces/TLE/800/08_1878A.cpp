#include <bits/stdc++.h>
using namespace std;

bool costofdaytona(int n, int k, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << (costofdaytona(n, k, arr) ? "YES" : "NO") << "\n";
    }
    return 0;
}