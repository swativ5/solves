#include <bits/stdc++.h>
using namespace std;

bool domremypaints3(int n, vector<long long> &arr)
{
    if (n == 1 || n == 2)
    {
        return true;
    }
    unordered_map<long long, long long> freq;
    set<long long> elements;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        elements.insert(arr[i]);
    }
    if (elements.size() > 2)
    {
        return false;
    }
    if (elements.size() == 1)
    {
        return true;
    }
    vector<long long> freqs;
    for (auto &p : freq)
    {
        freqs.push_back(p.second);
    }
    if (abs(freqs[0] - freqs[1]) <= 1)
    {
        return true;
    }
    return false;
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
        vector<long long> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << ((domremypaints3(n, arr)) ? "YES" : "NO") << "\n";
    }
    return 0;
}