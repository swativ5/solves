#include <bits/stdc++.h>
using namespace std;

int dontrytocount(string s, string x, int m, int n)
{
    int b = 0;
    while (b <= 5)
    {
        if (x.find(s) != std::string::npos)
        {
            return b;
        }
        x += x;
        b++;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        string s = "", x = "";
        cin >> n >> m;
        cin >> x >> s;
        cout << dontrytocount(s, x, m, n) << "\n";
    }
    return 0;
}