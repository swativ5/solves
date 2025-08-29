#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y) {
    int mx = max(x, y), mn = min(x, y);
    return mx <= 2 * (mn + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (valid(a, b) && valid(c - a, d - b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
