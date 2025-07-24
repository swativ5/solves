#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 2 pointer approach
    string longestPalindrome(string s) {
        if (s.empty())  {
            return "";
        }
        int n = s.size();
        int idx = 0, maxlen = 1;
        int left, right;
        for (int i = 0; i < n; i++) {
            // odd
            left = i;
            right = i;
            while (left >= 0 && right < n && s[left] == s[right])  {
                if (right - left + 1 > maxlen)  {
                    maxlen = right - left + 1;
                    idx = left;
                }
                left--;
                right++;
            }

            // even
            left = i; 
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right])  {
                if (right - left + 1 > maxlen)  {
                    maxlen = right - left + 1;
                    idx = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(idx, maxlen);
    }
};

int main()  {
    Solution sol;
    string s;

    s = "babad";
    cout << sol.longestPalindrome(s) << "\n";

    s = "cbbd";
    cout << sol.longestPalindrome(s) << "\n";
}