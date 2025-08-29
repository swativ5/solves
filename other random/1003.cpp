#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // approach: keep inserting into a stack
        // if there are abcs together then pop those elements (check when inserting c)
        int n = s.size();
        vector<char> stack;
        if (n < 3 || s[0] != 'a')   {
            return false;
        }
        for (int i = 0; i < n; i++) {
            int stacksize = stack.size();
            if (s[i] == 'c')    {
                if (stack.size() >= 2 && stack[stacksize - 1] == 'b' && stack[stacksize - 2] == 'a') {
                    stack.pop_back();
                    stack.pop_back();
                }   else    {
                    return false;
                }
            }   else    {
                stack.push_back(s[i]);
            }
            
        }
        if (stack.size() == 0)  {
            return true;
        }   else    {

            return false;
        }
    }
};

int main()  {
    string s;
    Solution sol;

    s = "abc";
    cout << sol.isValid(s) << "\n";

    s = "aabcbc";
    cout << sol.isValid(s) << "\n";

    s = "abcabcababcc";
    cout << sol.isValid(s) << "\n";

    s = "abccba";
    cout << sol.isValid(s) << "\n";
}