#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // check if empty
        // b - 1, a - 1, l - 2, o - 2, n - 1
        unordered_map<char, int> balloon_freq = {{'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}};
        vector<int> text_freq(26, 0);
        for (int i = 0; i < text.length(); i++) {
            text_freq[text[i] - 'a']++;
        }
        // for (int i: text_freq)  {
        //     cout << i << " ";
        // }
        cout << endl;
        int count = 0;
        while (true)    {
            if (text_freq['b' - 'a'] >= (count * 1) + 1 &&
                text_freq['a' - 'a'] >= (count * 1) + 1 &&
                text_freq['l' - 'a'] >= (count * 2) + 2 &&
                text_freq['o' - 'a'] >= (count * 2) + 2 &&
                text_freq['n' - 'a'] >= (count * 1) + 1)    {
                count++;
            }   else {
                // cout << (text_freq['b'] >= (count * 1) + 1) << (text_freq['a'] >= (count * 1) + 1) << (text_freq['l'] >= (count * 2) + 2) << (text_freq['o'] >= (count * 2) + 2) << (text_freq['n'] >= (count * 1) + 1);
                break;

            }
        }
        return count;
    }
};

int main()  {
    Solution s;

    string text1 = "bbaalllloooonn";
    cout << "Answer: " << s.maxNumberOfBalloons(text1) << endl;

    text1 = "nlaebolko";
    cout << "Answer: " << s.maxNumberOfBalloons(text1) << endl;

    text1 = "loonbalxballpoon";
    cout << "Answer: " << s.maxNumberOfBalloons(text1) << endl;

    text1 = "leetcode";
    cout << "Answer: " << s.maxNumberOfBalloons(text1) << endl;
}
