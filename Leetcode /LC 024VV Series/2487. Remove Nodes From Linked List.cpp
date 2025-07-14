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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;

        while(head) {
            while(!st.empty() && head->val > st.top()->val) {
                st.pop();
            }
            st.push(head);
            head = head->next;
        }

        ListNode* curr = nullptr;
        while(!st.empty()) {
            st.top()->next = curr;
            curr = st.top();
            st.pop();
        }

        return curr;
    }
};
