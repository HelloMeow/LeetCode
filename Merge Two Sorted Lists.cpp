/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        
        if (!l1) {
            head = l2;
            return head;
        } 
        if (!l2) {
            head = l1;
            return head;
        }
        
        // l1 && l2 != NULL
        if (l1->val < l2->val) {
            head = tail = l1;
            l1 = l1->next;
        } else {
            head = tail = l2;
            l2 = l2->next;
        }
        
        while (l1 && l2) {
            ListNode* minNode = NULL;
            if (l1->val < l2->val) {
                minNode = l1;
                l1 = l1->next;
            } else {
                minNode = l2;
                l2 = l2->next;
            }
            
            tail->next = minNode;
            tail = tail->next;
        }
        
        if (l1) {
            tail->next = l1;
        } else if (l2) {
            tail->next = l2;
        }
        
        return head;
    }
};