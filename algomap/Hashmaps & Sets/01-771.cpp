#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        if (jewels.length() == 0 || stones.length() == 0)   {
            return 0;
        }
        unordered_set<char> jewels_set;
        int n = 0;
        for (char jewel: jewels)    {
            jewels_set.insert(jewel);
        }
        for (char stone : stones)   {
            if (jewels_set.count(stone))    {
                n++;
            }
        }
        return n;
    }
};

int main()  {
    Solution s;

    string jewels1 = "aA";
    string stones1 = "aAAbbbb";
    cout << "Answer: " << s.numJewelsInStones(jewels1, stones1) << endl;

    return 0;
}
