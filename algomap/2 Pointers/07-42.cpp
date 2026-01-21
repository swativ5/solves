// solve again with the more optimised version 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 1 || n == 2) {
            return 0;
        }

        int area = 0;
        height.insert(height.begin(), 0);
        height.push_back(0);

        vector<int> lmax(n + 2, -1);
        for (int i = 1; i < n + 2; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }

        vector<int> rmax(n + 2, -1);
        for (int i = n; i >= 0; i--)   {
            rmax[i] = max(rmax[i + 1], height[i]);
        }

        for (int i = 1; i < n + 1; i ++)    {
            area += max(0, min(lmax[i], rmax[i]) - height[i]);

        }
        return area;
    }
};

int main()  {
    Solution s;
    vector<int> height;

    height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << s.trap(height) << "\n";

    height = {4,2,0,3,2,5};
    cout << s.trap(height) << "\n";
}
//      *
// *xxxx*
// *xx*x*
// **x***
// **x***