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
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head;
        ListNode* dummyMini = new ListNode(0);
        ListNode* dummyMaxi = new ListNode(0);
        ListNode* mini = dummyMini, *maxi = dummyMaxi;

        while(head) {
            if(head->val < x) {
                mini->next = head;
                mini = mini->next;
            }
            else {
                maxi->next = head;
                maxi = maxi->next;
            }
            head = head->next;
        }

        maxi->next = nullptr;
        mini->next = dummyMaxi->next;
        ListNode* ans = dummyMini->next;
        delete dummyMini, dummyMaxi;
        return ans;
    }
};
