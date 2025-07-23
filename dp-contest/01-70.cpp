#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dparray(n + 1, 1);
        // for (auto n : dparray)  {
        //     cout << n << " ";
        // }
        // cout << endl;
        dparray[1] = 1;
        if (n + 1 > 2) {
            dparray[2] = 2;
        }
        // cout << "stuck here 1" << "\n";
        for (int i = 3; i <= n; i++) {
            // cout << "stuck here 2" << "\n";
            dparray[i] = dparray[i - 1] + dparray[i - 2];
        }
        // cout << "stuck here 3" << "\n";
        return dparray[n];
    }
};

int main()  {
    Solution s;
    int n;

    n = 1; 
    cout << s.climbStairs(n) << "\n";

    n = 3;
    cout << s.climbStairs(n) << "\n";
}