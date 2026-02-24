#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0 || s[0] == '0'){
            return 0;
        }
        vector<int> dp(n, 0);
        dp[0] = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != 0)  {s
                dp[i] = dp[i - 1];
            }
            if ((s[i - 1] == '2' && s[i] <= '6'&& s[i] >= '0') || s[i - 1] == '1') {
                dp[i] += dp[i - 2];
            }
        }
        return dp[n - 1];  
    }
};

int main()  {
    Solution s;
    string str;

    str = "12";
    cout << s.numDecodings(str) << "\n";

    str = "226";
    cout << s.numDecodings(str) << "\n";

    str = "06";
    cout << s.numDecodings(str) << "\n";
}