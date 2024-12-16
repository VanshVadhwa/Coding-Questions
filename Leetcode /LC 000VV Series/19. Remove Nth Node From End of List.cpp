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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* temp = dummy;

        for(int i=0;i<n;i++) {
            head = head->next;
        }

        while(head) {
            head = head->next;
            temp = temp->next;
        }

        ListNode* temp1 = temp->next;
        temp->next = temp->next->next;
        delete temp1;

        return dummy->next;
    }
};
