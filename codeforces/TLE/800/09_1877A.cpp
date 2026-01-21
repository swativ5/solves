#include <bits/stdc++.h>
using namespace std;

long long goalsofvictory(vector<int> &arr)
{
    long long sum = 0;
    for (auto n : arr)
    {
        sum += n;
    }
    return -sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n - 1);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        cout << goalsofvictory(arr) << "\n";
    }
    return 0;
}