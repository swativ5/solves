#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)  {
        int n, m;
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b;
        cin >> c;
        deque<char> dq(a.begin(), a.end());

        for (int i = 0; i < m; i++)    {
            if (c[i] == 'V')  {
                dq.push_front(b[i]);
            }   else    {
                dq.push_back(b[i]);
            }
        }
        for (char ch: dq)   {
            cout << ch;
        }
        cout << "\n";
    }
}