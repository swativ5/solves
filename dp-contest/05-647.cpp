#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        if (s.empty())  {
            return 0;
        }      
        int n = s.size();
        int left, right, count = 0;
        for (int i = 0; i < n; i++) {
            // odd
            left = right = i;
            while (left >= 0 && right < n && s[left] == s[right])   {
                count++;
                left--;
                right++;
            }
            //even
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right])   {
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
};

int main()  {
    Solution sol;
    string s;

    s = "abc";
    cout << sol.countSubstrings(s) << "\n";

    s = "aaa";
    cout << sol.countSubstrings(s) << "\n";    
}