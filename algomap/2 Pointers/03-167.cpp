#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left <= right)   {
            int sum = numbers[left] + numbers[right];
            if (sum == target)  {
                return {left + 1, right + 1};
            }   else if (sum > target)  {
                right--;
            }   else    {
                left++;
            }
            
        }

        return {0};
    }
};

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Solution sol; 

    vector<int> numbers;
    int target;
    
    numbers = {2,7,11,15};
    target = 9;
    for (auto n: sol.twoSum(numbers, target))   {
        cout << n << " ";
    }
    cout << "\n";

    numbers = {2,3,4};
    target = 6;
    for (auto n: sol.twoSum(numbers, target))   {
        cout << n << " ";
    }
    cout << "\n";

    numbers = {-1,0};
    target = -1;
    for (auto n: sol.twoSum(numbers, target))   {
        cout << n << " ";
    }
    cout << "\n";
}