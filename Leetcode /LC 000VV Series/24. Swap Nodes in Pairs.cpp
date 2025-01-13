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
    void swapInPairs(ListNode*& prev, ListNode*& curr) {
        if(!curr || !curr->next) return;
        
        ListNode* nextPair = curr->next->next;
        ListNode* second = curr->next;

        second->next = curr;
        curr->next = nextPair;
        prev->next = second;

        swapInPairs(curr,nextPair);
    }
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* dummy = new ListNode(0,head);
        ListNode *prev=dummy, *curr=head;
        swapInPairs(prev,curr);
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
