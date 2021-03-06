/*
Given a linked list, determine if it has a cycle in it.
Follow up:
Can you solve it without using extra space?
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
        if (!head) return false;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (true) {
            if (!fast || !(fast = fast->next)) return false;
            if (fast == slow) return true;
            slow = slow->next;
            fast = fast->next;
        }
    }
};