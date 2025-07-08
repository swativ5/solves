#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int curr_height, curr_width, max_area = 0;

        while (left < right)    {
            curr_height = min(height[left], height[right]);
            curr_width = right - left;
            max_area = max(max_area, curr_height * curr_width);

            if (height[left] > height[right])   {
                right--;
            }   else    {
                left++;
            }
        }

        return max_area;
    }
};

int main()  {
    Solution s;
    vector<int> height;

    height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height) << "\n";

    height = {1,1};
    cout << s.maxArea(height) << "\n";
}