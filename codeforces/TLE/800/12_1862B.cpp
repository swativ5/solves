#include <bits/stdc++.h>
using namespace std;

vector<long long> sequencegame(vector<long long> &b, long long n)
{
    if (n == 1)
    {
        return b;
    }
    vector<long long> a = {b[0]};
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] > b[i])
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
        }
    }
    return a;
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
        vector<long long> b(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<long long> a = sequencegame(b, n);
        cout << a.size() << "\n";
        for (auto cn : a)
        {
            cout << cn << " ";
        }
        cout << "\n";
    }
    return 0;
}