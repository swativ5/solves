#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // find the correct row
        int left = 0, right = m - 1, mid = 0, row = -1;
        while (left <= right)   {
            mid = left + (right - left) / 2;
            if (matrix[mid][0] <= target && matrix[mid][n - 1] >= target)   {
                row = mid;
                break;
            }   else if (matrix[mid][0] > target)   {
                right = mid - 1;
            }   else    {
                left = mid + 1;
            }
        }

        if (row == -1)  {
            return false;
        }

        int start = 0, end = n - 1;
        while (start <= end)    {
            mid = start + (end - start) / 2;
            if (matrix[row][mid] == target)    {
                return true;
            }   else if (matrix[row][mid] < target)    {
                start = mid + 1;
            }   else    {
                end = end - 1;
            }
        }

        return false;
    }
};

int main()  {
    Solution s;
    vector<vector<int>> matrix;
    int target;

    matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    target = 3;
    cout << s.searchMatrix(matrix, target) << "\n";
}