#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
        {
            return list2;
        }
        if (list2 == nullptr)
        {
            return list1;
        }

        ListNode *small, *big, *head;
        if (list1->val < list2->val)
        {
            small = list1;
            big = list2;
        }
        else
        {
            small = list2;
            big = list1;
        }
        head = small;

        while (small != nullptr && small->next != nullptr && big != nullptr)
        {
            if (small->next->val >= big->val)
            {
                ListNode *temp = big->next;
                big->next = small->next;
                small->next = big;
                small = big;
                big = temp;
            }
            else
            {
                small = small->next;
            }
        }
        if (big != nullptr)
        {
            small->next = big;
        }
        return head;
    }
};
