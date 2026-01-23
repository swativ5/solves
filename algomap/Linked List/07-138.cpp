#include <bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
    public:
    struct Node {
        int val;
        Node* next;
        Node* random;
        
        Node(int _val) {
            val = _val;
            next = NULL;
            random = NULL;
        }
    };

    Node* copyRandomList(Node* head) {
        Node* newhead = new Node(0), *newheadcurr = newhead;
        Node *oldhead = head;
        unordered_map<Node*, Node*> map;
        
        // copying the next pointers
        while (oldhead) {
            Node* newnode = new Node(oldhead->val);
            newheadcurr->next = newnode;
            newheadcurr = newnode;
            map[oldhead] = newnode;
            oldhead = oldhead->next;
        }

        // copying the random pointers
        oldhead = head;
        newheadcurr = newhead;
        while (oldhead) {
            map[oldhead]->random = map[oldhead->random];
            oldhead = oldhead->next;

        }
        return newhead->next;

    }
};
