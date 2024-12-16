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
    int getLength(ListNode* &head) {
        int len = 0;
        ListNode* temp = head;
        while(temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* reverse(ListNode* &head) {
        if(!head || !head->next) return head;

        ListNode *prev = NULL, *curr=head, *forward=NULL;
        while(curr) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        
        int len = (getLength(head))/2;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(len--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        ListNode* newHead = reverse(curr);

        while(head && newHead) {
            if(head->val != newHead->val) {
                return false;
            }
            head = head->next;
            newHead = newHead->next;
        }

        return true;

    }
};
