#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        unsigned long len1 {word1.size()}, len2 {word2.size()};
        int a {0}, b {0};
        string result;
        result.reserve(len1 + len2);

        while (a < len1 && b < len2)    {
            result += word1[a++];
            result += word2[b++];
        }

        while (a < len1)    {
            result += word1[a++];
        }

        while (b < len2)    {
            result += word2[b++];
        }

        return result;
    }
};

int main()  {
    Solution s;

    cout << "Answer " << s.mergeAlternately("abc", "pqr") << endl;
    cout << "Answer " << s.mergeAlternately("abc", "pqrs") << endl;
    cout << "Answer " << s.mergeAlternately("abcde", "pqr") << endl;
}