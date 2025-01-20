#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left {0}, right {1};
        int profit {0}, max_profit {0};
        while (right < prices.size())   {
            if (prices[left] < prices[right])   {
                profit = prices[right] - prices[left];
                max_profit = max(profit, max_profit);
            }   else    {
                left = right;
            }
            right++;
        }
        return max_profit;
    }
};



int main()  {
    Solution s;

    vector<int> nums1 = {7, 1, 5, 3, 6, 4};
    cout << "Answer: " << s.maxProfit(nums1) << endl;

    vector<int> nums2 = {7, 6, 4, 3, 1};
    cout << "Answer: " << s.maxProfit(nums2) << endl;

}