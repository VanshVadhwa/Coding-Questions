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
    int gcd(int a, int b)
    {
        while(b!=0) {
            int temp = a;
            a = b;
            b = temp%b;
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        ListNode* forward = head->next;

        while(forward != nullptr)
        {
            ListNode* temp = new ListNode(gcd(curr->val,forward->val));

            curr->next = temp;
            temp->next = forward;

            curr = forward;
            forward = forward->next;
        }
        return head;
    }
};
