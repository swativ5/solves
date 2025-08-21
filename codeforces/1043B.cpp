#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> answers;

        long long p = 10;
        while (p <= n) {
            long long m = 1 + p;
            if (n % m == 0) {
                answers.push_back(n / m);
            }
            if (p > LLONG_MAX / 10) break;
            p *= 10;
        }

        if (answers.empty()) {
            cout << 0 << "\n";
        } else {
            sort(answers.begin(), answers.end());
            cout << answers.size() << "\n";
            for (auto val : answers) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
