#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        // find the correct row
        int left = 0, right = m - 1, mid = 0;
        while (left <= right)   {
            mid = left + (right - left) / 2;
            if (matrix[mid][0] < target)   {
                right = mid - 1;
            }   else    {
                left = mid + 1;
            }
        }

        int start = 0, end = n - 1;
        while (start <= end)    {
            mid = left + (right - left) / 2;
            if (matrix[left][mid] == target)    {
                return true;
            }   else if (matrix[left][mid] < target)    {
                start = mid + 1;
            }   else    {
                end = end - 1;
            }
        }

        return false;
    }
};

int main()  {
    
}