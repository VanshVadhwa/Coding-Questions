#include <iostream>

struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* mergeNodes(ListNode* head) {
       ListNode* temp = head->next, *prev = head;

       int sum = 0;

       while (temp) {
           if (temp->val) {
               sum += temp->val;
           } else {
               temp->val = sum;
               sum = 0;
               prev->next = temp;
               prev = temp;
           }
           temp = temp->next;
       }
       return head->next;
   }
};

int main() {
   // create a test linked list
   ListNode* head = new ListNode(2);
   head->next = new ListNode(4);
   head->next->next = new ListNode(1);
   head->next->next->next = new ListNode(3);

   // call the mergeNodes function
   Solution solution;
   ListNode* mergedList = solution.mergeNodes(head);

   // print the merged list
   ListNode* temp = mergedList;
   while (temp) {
       std::cout << temp->val << " ";
       temp = temp->next;
   }

   return 0;
}
