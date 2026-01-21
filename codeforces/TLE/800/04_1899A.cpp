#include <bits/stdc++.h>
using namespace std;

bool vanyaorvova(long long n)
{
    if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
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
        long long n;
        cin >> n;

        cout << (vanyaorvova(n) ? "First" : "Second") << "\n";
    }
    return 0;
}