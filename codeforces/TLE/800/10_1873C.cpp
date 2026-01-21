#include <bits/stdc++.h>
using namespace std;

long long targetpractice(vector<vector<char>> &input)
{
    vector<vector<int>> matrix;
    matrix = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
              {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    long long score = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (input[i][j] == 'X')
            {
                score += matrix[i][j];
            }
        }
    }
    return score;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> input(10, vector<char>(10));

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> input[i][j];
            }
        }
        cout << targetpractice(input) << "\n";
    }
    return 0;
}