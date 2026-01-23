#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low = 0, high = num;
        long long temp = 0, mid = 0;
        while (low <= high)   {
            mid = low + (high - low) / 2;
            temp = mid * mid;
            // cout << temp << " ";
            if (temp == num)   {
                return true;
            }   else if (num < temp)    {
                high = mid - 1;
            }   else    {
                low = mid + 1;
            }
        }
        return false;
    }
};

int main()  {
    Solution s;
    int n;

    n = 16;
    cout << s.isPerfectSquare(n) << "\n";

    n= 14;
    cout << s.isPerfectSquare(n) << "\n";
}