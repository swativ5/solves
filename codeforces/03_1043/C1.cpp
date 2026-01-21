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

        long long coins = 0;
        int x = 0;

        while (n > 0) {
            long long digit = n % 3; 
            if (digit > 0) {
                if (x == 0) {
                    coins += digit * (pow(3, x + 1));
                }   else    {
                coins += digit * (pow(3, x + 1) + ((x) * pow(3, x - 1)));
                }
            }
            n /= 3;
            x++;
        }
        cout << coins << "\n";
    }
    return 0;
}
