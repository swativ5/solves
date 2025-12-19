#include <bits/stdc++.h>
using namespace std;

vector<int> forbiddenintooovoldemort(int n, int k, int x)
{
    if (k == 1)
    {
        return {};
    }

    if (k == 2)
    {
        if (x == 1)
        {
            if (n % 2 == 0)
            {
                return vector<int>(n / 2, 2);
            }
            else
            {
                return {};
            }
        }
        else
        {
            return vector<int>(n, 1);
        }
    }
    if (k >= 3)
    {
        if (x == 1)
        {
            if (n % 2 == 0)
            {
                return vector<int>(n / 2, 2);
            }
            if (n == 1)
            {
                return {};
            }
            vector<int> narr((n - 3) / 2, 2);
            narr.insert(narr.begin(), 3);
            return narr;
        }
        return vector<int>(n, 1);
    }
    return vector<int>(n, 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> voldemort = forbiddenintooovoldemort(n, k, x);
        if (voldemort.empty())
        {
            cout << "NO" << "\n";
            continue;
        }
        cout << "YES" << "\n";
        cout << voldemort.size() << "\n";
        for (auto vn : voldemort)
        {
            cout << vn << " ";
        }
        cout << "\n";
    }
    return 0;
}