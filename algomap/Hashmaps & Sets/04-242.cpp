#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map, t_map;
        for (char c : s)    {
            s_map[c]++;
        }
        for (char c: t) {
            t_map[c]++;
        }
        for ( it = s_map.begin(); )
    }
};
