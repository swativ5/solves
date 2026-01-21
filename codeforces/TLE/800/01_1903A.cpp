#include <bits/stdc++.h>
using namespace std;

bool halloumi(int n, int k, vector<int> arr)
{
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    if (k == 1 && arr != sortedArr)
    {
        return false;
    }
    return true;
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

        cout << (halloumi(n, k, arr) ? "YES" : "NO") << "\n";
    }
    return 0;
}