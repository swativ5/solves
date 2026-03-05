#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 1; i < n; i++) {
            string temp = "";
            for (int j = s.size() - 1; j >= 0; j--)  {
                temp += (s[j] == '0') ? '1':'0';
            }
            if (k < s.size())   {
                return s[k - 1];
            }
            s = s + '1' + temp;
        }
        return s[k - 1];
    }
};

int main()  {
    Solution s;
    int n; int k;

    n = 3; k = 1;
    cout << s.findKthBit(n, k) << "\n";

    n = 4; k = 11;
    cout << s.findKthBit(n, k) << "\n";

    n = 2; k = 3;
    cout << s.findKthBit(n, k) << "\n";

}