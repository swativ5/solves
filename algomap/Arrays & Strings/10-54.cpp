#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        cout << m << " " << n << endl;
        int right = n - 1, down = m - 1, left = 0, up = 0;

        vector<int> output;
        while(right >= left && up <= down) {
            // left to right
            for (int j = left; j <= right; j++)  {
                output.push_back(matrix[up][j]);
            }
            up++;

            // up to down
            for (int i = up; i <= down; i++)    {
                output.push_back(matrix[i][right]);
            }
            right--;

            // right to left
            if (up <= down) {
                for (int j = right; j >= left; j--) {
                    output.push_back(matrix[down][j]);
                }
                down--;
            }

            //down to up
            if (left <= right)  {
                for (int i = down; i >= up; i--)    {
                    output.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return output;
    }
};

int main()  {
    Solution s;
    vector<int> output;

    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    output = s.spiralOrder(matrix1);
    cout << "Answer: ";
    for (int range : output) {
        cout << range << " ";
    }
    cout << endl;
}
