/*

Solved on November 6th, 2023
Runtime of 7ms -- Better than 88.70% of C++ users
Memory Allocation of 8.39MB -- Better than 79.73% of C++ users

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto tortoise = head;
        auto hare = head;
        while(hare && hare->next)
        {
            tortoise = tortoise->next;
            hare = hare->next->next;
            if(tortoise == hare)    return true;
        }
        return false;
    }
};