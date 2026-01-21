#include <bits/stdc++.h>
using namespace std;

int coverforwater(vector<int> &arr)
{
    int n = arr.size();

    if (n == 0)
    {
        return 0;
    }
    int minops = 0;
    int infinite = 0, n1 = 0, n2 = 0;
    for (auto n : arr)
    {
        if (n >= 3)
        {
            infinite++;
        }
        n1 += (n == 1) ? 1 : 0;
        n2 += (n == 2) ? 1 : 0;
    }
    if (infinite)
    {
        return 2;
    }
    else
    {
        return (2 * n2) + n1;
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
        vector<int> arr;

        int current = 0;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '.')
            {
                current++;
            }
            else
            {
                if (current != 0)
                {
                    arr.push_back(current);
                    current = 0;
                }
            }
        }
        if (current != 0)
        {
            arr.push_back(current);
        }
        cout << coverforwater(arr) << "\n";
    }
    return 0;
}