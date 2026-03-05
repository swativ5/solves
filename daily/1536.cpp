#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailingzeros(n, n);
        for (int i = 0; i < n; i++) {
            int zeros = 0;
            for (int j = n - 1; j >= 0; j--)    {
                if (grid[i][j] == 1)    {
                    break;
                }
                zeros++;
            }
            trailingzeros[i] = zeros;
        }

        // for (int x: trailingzeros)  {
        //     cout << x << " ";
        // }
        // cout << "\n";
        int swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            if (trailingzeros[i] >= n - 1 - i)
                continue;
            
            int newrow = i + 1;
            while (newrow != n && trailingzeros[newrow] < n - 1 - i)   {
                newrow++;
            }
            if (newrow == n) return -1;
            while (newrow != i)    {
                swap(trailingzeros[newrow], trailingzeros[newrow - 1]);
                newrow--;
                swaps++;
            }
            
        }

        for (int i = 0; i < n; i++) {
            if (trailingzeros[i] < n - 1 - i)   {
                return -1;
            }
        }
        // 1 0 0 -> min n - 1 - i
        // 1 1 0 -> min n - 1 
        // 1 1 0
        // for (int x: trailingzeros)  {
        //     cout << x << " ";
        // }
        // cout << "\n";
        return swaps;
    }
};

int main()  {
    Solution s;
    vector<vector<int>> grid;

    grid = {{0,0,1},{1,1,0},{1,0,0}};
    cout << s.minSwaps(grid) << "\n";

    grid = {{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0}};
    cout << s.minSwaps(grid) << "\n";

    grid = {{1,0,0},{1,1,0},{1,1,1}};
    cout << s.minSwaps(grid) << "\n";

    grid = {{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0}};
    cout << s.minSwaps(grid) << "\n";

    
    grid = {{1,0,0,0,0,0},{0,1,0,1,0,0},{1,0,0,0,0,0},{1,1,1,0,0,0},{1,1,0,1,0,0},{1,0,0,0,0,0}};
    cout << s.minSwaps(grid) << "\n";
}