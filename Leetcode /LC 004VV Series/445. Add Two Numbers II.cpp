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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1;
        stack<int> st2;

        while(l1) {
            st1.push(l1->val);
            l1 = l1 ->next;
        }
        while(l2) {
            st2.push(l2->val);
            l2 = l2->next;
        }

        int sum = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while(!st1.empty() || !st2.empty() || sum > 0) 
        {
            if(!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }
            if(!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }

            ListNode* temp = new ListNode(sum%10);
            temp->next = current->next;
            current->next = temp;

            sum /= 10;
        }

        return dummy->next;
    }
};
