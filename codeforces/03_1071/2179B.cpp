#include <bits/stdc++.h>
using namespace std;

long long showering(vector<long long> &arr)
{
    long long n = arr.size();
    long long maxsaving = 0;
    long long elementtoremove = 0;

    long long saving = abs(arr[1] - arr[0]);
    if (saving > maxsaving)
    {
        maxsaving = saving;
        elementtoremove = 0;
    }
    for (int i = 1; i < n - 1; i++)
    {
        long long olds = abs(arr[i] - arr[i - 1]) + abs(arr[i + 1] - arr[i]);
        long long news = abs(arr[i - 1] - arr[i + 1]);
        saving = olds - news;
        if (saving > maxsaving)
        {
            maxsaving = saving;
            elementtoremove = i;
        }
    }
    saving = abs(arr[n - 1] - arr[n - 2]);
    if (saving > maxsaving)
    {
        maxsaving = saving;
        elementtoremove = n - 1;
    }

    arr.erase(arr.begin() + elementtoremove);

    long long totaltime = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        totaltime += abs(arr[i + 1] - arr[i]);
    }
    return totaltime;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << showering(arr) << "\n";
    }
    return 0;
}