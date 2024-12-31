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
private:
    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(head1 && head2) {
            if(head1->val <= head2->val) {
                curr->next = head1;
                head1 = head1->next;
            }
            else {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }
        curr->next = head1 ? head1 : head2;
        ListNode* head = dummy->next;
        delete dummy;
        return head;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return nullptr;
        ListNode* head = lists[0];

        for(int i=1;i<n;i++) {
            head = merge(head,lists[i]);
        }

        return head;
    }
};
