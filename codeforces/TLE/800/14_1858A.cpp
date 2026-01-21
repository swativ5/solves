#include <bits/stdc++.h>
using namespace std;

bool buttonsooocoraline(vector<long long> arr)
{
    bool turn = true; // true -> Annas turn
    if (arr[2] % 2 == 0)
    {
        turn = true;
    }
    else
    {
        turn = false;
    }
    if (arr[0] == arr[1])
    {
        if (turn)
        {
            return false;
        }
        return true;
    }
    if (arr[0] + 1 == arr[1])
    {
        return false;
    }
    if (arr[0] == arr[1] + 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
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
        vector<long long> arr(3, 0);
        cin >> arr[0] >> arr[1] >> arr[2];

        cout << (buttonsooocoraline(arr) ? "First" : "Second") << "\n";
    }
    return 0;
}