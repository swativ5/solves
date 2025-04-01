#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0 || strs[0] == "") {
            return "";
        }
        string s = "";
        int pointer = 0;
        char c;
        while (true)  {
            if (pointer >= strs[0].size()) {
                return s;
            }
            c = strs[0][pointer];
            for (int i = 1; i < strs.size(); i++)   {
                if  (pointer >= strs[i].size() || strs[i][pointer]!= c) {
                    return s;
                }
            }
            s += c;
            pointer++;
        }
    }
};

int main()  {
    Solution s;

    vector<string> strs1 = {"flower","flow","floght"};
    cout << "Answer: " << s.longestCommonPrefix(strs1) << endl;


    vector<string> strs2 = {"a"};
    cout << "Answer: " << s.longestCommonPrefix(strs2) << endl;
    return 0;
}
