#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int i {0};
        int n = s.length();
        int sum {0};

        while (i < n - 1)   {
            if (map[s[i]] < map[s[i + 1]]) {
                sum += map[s[i + 1]] - map[s[i]];
                i += 2;
            }   else    {
                sum += map[s[i]];
                i++;
            }
        }
        sum += map[s[i]];
        return sum;
    }
};

int main()  {
    Solution s;

    cout << "Answer: " << s.romanToInt("III") << endl;
    cout << "Answer: " << s.romanToInt("LVIII") << endl;
    cout << "Answer: " << s.romanToInt("MCMXCIV") << endl;
}