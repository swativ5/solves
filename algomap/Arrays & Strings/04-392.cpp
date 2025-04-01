#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer1 {0}, pointer2 {0};
        unsigned long len1 {s.size()}, len2 {t.size()};

        while (pointer1 < len1 && pointer2 < len2)  {
            if (s[pointer1] == t[pointer2])   {
                pointer1++;
                pointer2++;
            }   else    {
                pointer2++;
            }
        }

        if (pointer1 == len1)   {
            return true;
        }
        return false;
    }
};

int main()  {
    Solution s;

    cout << "Answer: " << s.isSubsequence("abc", "abdexc") << endl;
    cout << "Answer: " << s.isSubsequence("abc", "ahbgdc") << endl;
    cout << "Answer: " << s.isSubsequence("axc", "ahbgdc") << endl;
}