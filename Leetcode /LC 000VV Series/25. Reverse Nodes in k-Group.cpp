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
    int getLength(ListNode* head) {
        int ans = 0;
        while(head) {
            ans++;
            head = head->next;
        }
        return ans;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* first = new ListNode(0);
        first->next = head;
        head = first;
        
        ListNode *second, *prev, *curr, *front;
        int len = getLength(head);
        
        while(first->next) {
            int x = k;
            
            second = first->next;
            prev = first;
            curr = first->next;
            
            while(curr && x--) {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                count++;
            }
            
            first->next = prev;
            second->next = curr;
            first = second;
        }
        
        first = head;
        head = head->next;
        delete first;

        return head;
    }
};
