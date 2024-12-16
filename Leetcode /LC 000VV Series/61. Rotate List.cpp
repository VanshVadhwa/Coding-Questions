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
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) {
            return head;
        }

        ListNode* dummy = new ListNode(0,head);
        ListNode* curr = dummy;
        ListNode* oldHead = head;

        int len = getLength(head);
        k = k%len;

        if(k==0) {
            return head;
        }

        for(int i=1;i<k;i++) {
            head = head->next;
        }

        ListNode* prev = NULL;
        ListNode* prevHead = NULL;
        while(head) {
            prev = curr;
            prevHead = head;
            curr = curr->next;
            head = head->next;
        }

        prev->next = NULL;
        prevHead->next = oldHead;
        return curr;
    }
};
