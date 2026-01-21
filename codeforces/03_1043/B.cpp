#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)  {
        long long int n;
        cin >> n;

        long long int power = 10;
        vector<long long> results;
        while(power <= n)   {
            if (n % (power + 1) == 0)  {
                results.push_back(n / (power + 1));
            }
            power *= 10;
        }
        if (results.size() > 0)   {
            sort(results.begin(), results.end());
            cout << results.size() << "\n";
            for (long long r: results)    {
                cout << r << " ";
            }
            cout << "\n";
        }   else    {
            cout << "0 \n";
        }
    }
}