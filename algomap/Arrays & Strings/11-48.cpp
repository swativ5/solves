#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < ceil(n/2); j++) {
                swap(matrix[i][j], matrix[i][n - j - 1]);
            }
        }
    }
};

int main()  {
    Solution s;
    vector<int> output;

    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(matrix1);
    cout << "Answer: ";
    for (vector<int> row : matrix1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
}
