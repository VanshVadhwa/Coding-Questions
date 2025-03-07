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
    int pairSum(ListNode* head) {
        ListNode* slow = new ListNode(0,head);
        ListNode* fast = new ListNode(0,head);
        stack<int> st;

        while(fast && fast->next) {
            slow = slow->next;
            st.push(slow->val);
            fast = fast->next->next;
        }

        int ans = 0;
        slow = slow->next;
        while(slow && !st.empty()) {
            ans = max(ans,slow->val+st.top());
            slow = slow->next;
            st.pop();
        }

        return ans;
    }
};
