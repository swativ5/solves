#include <bits/stdc++.h>
using namespace std;

bool jaggedswaps(int n, vector<int> &arr)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << ((jaggedswaps(n, arr)) ? "YES" : "NO") << "\n";
    }
    return 0;
}