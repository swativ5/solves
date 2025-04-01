#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Sorting
        // sort(ransomNote.begin(), ransomNote.end());
        // sort(magazine.begin(), magazine.end());

        // int i = 0, j = 0;
        // while (i < ransomNote.length() && j < magazine.length())    {
        //     if (ransomNote[i] == magazine[j])   {
        //         i++;
        //         j++;
        //     }   else if (ransomNote[i] > magazine[j])   {
        //         j++;
        //     }   else {
        //         return false;
        //     }
        // }
        // return (i == ransomNote.length());

        unordered_map<char, int> map;
        for (char r : magazine)   {
            map[r]++;
        }

        for (char c : ransomNote)   {
            if (map[c] <= 0)  {
                return false;
            }
            map[c]--;
        }
        return true;
    }
};
