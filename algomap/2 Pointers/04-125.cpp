#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s == "")    {
            return true;
        }

        int left = 0, right = s.size() - 1;

        while (left < right)    {
            if (tolower(s[left]) == tolower(s[right]))    {
                left++;
                right--;
                continue;
            }
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            return false;
        }

        return true;
    }
};

int main()  {
    Solution sol;
    string s;

    s = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(s) << "\n";

    s = "race a car";
    cout << sol.isPalindrome(s) << "\n";

    s = " ";
    cout << sol.isPalindrome(s) << "\n";


}