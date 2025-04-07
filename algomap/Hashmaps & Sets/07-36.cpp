#include <bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         unordered_set<char> rows[9];
//         unordered_set<char> columns[9];
//         unordered_set<char> boxes[9];

//         for (int row = 0; row < 9; row++)   {
//             for (int column = 0; column < 9; column++)  {
//                 if (board[row][column] == '.')  {
//                     continue;
//                 }
//                 char value = board[row][column];
//                 int box = (row / 3) * 3 + (column / 3);
//                 if (rows[row].count(value) || columns[column].count(value) || boxes[box].count(value))  {
//                     return false;
//                 }
//                 rows[row].insert(value);
//                 columns[column].insert(value);
//                 boxes[box].insert(value);
//             }
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(9, vector<bool>(9, false));
        vector<vector<bool>> columns(9, vector<bool>(9, false));
        vector<vector<bool>> boxes(9, vector<bool>(9, false));

        for (int row = 0; row < 9; row++)   {
            for (int column = 0; column < 9; column++)  {
                if (board[row][column] == '.')  {
                    continue;
                }
                int value = board[row][column] - '0' - 1;
                int box = (row / 3) * 3 + (column / 3);
                if (rows[row][value] || columns[column][value] || boxes[box][value])    {
                    return false;
                }
                rows[row][value] = true;
                columns[column][value] = true;
                boxes[box][value] = true;
            }
        }
        return true;
    }
};
