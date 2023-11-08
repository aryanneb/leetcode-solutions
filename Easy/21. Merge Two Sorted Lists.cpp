/*

Solved on November 7th, 2023
Runtime of 3ms -- Better than 85.44% of C++ users
Memory Allocation of 15.09MB -- Better than 73.02% of C++ users

*/

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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        
        ListNode* output;
        ListNode* traversal;

        if(list1->val > list2->val)
        {
            output = list2;
            list2 = list2->next;
        }
        else
        {
            output = list1;
            list1 = list1->next;
        }
        
        traversal = output;

        while(list1 && list2)
        {
            if(list1->val > list2->val)
            {
                traversal->next = list2;
                list2 = list2->next;
            }
            else
            {
                traversal->next = list1;
                list1 = list1->next;
            }
            
            traversal = traversal->next;
        }

        if(!list1)
            traversal->next = list2;
        else
            traversal->next = list1;
            
        return output;

    }
};