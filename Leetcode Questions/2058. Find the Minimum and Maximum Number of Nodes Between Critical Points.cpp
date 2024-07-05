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
  vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    if (!head->next->next || !head->next->next->next) {
      return {-1, -1};
    }

    vector<int> ans;

    ListNode* temp = head->next;
    ListNode* curr;
    ListNode* prev = head;
    ListNode* forward;

    int count = 2;

    while (temp->next) {
      curr = temp;
      forward = temp->next;
      if ((prev->val < curr->val && forward->val < curr->val) ||
          (prev->val > curr->val && forward->val > curr->val)) {
        ans.push_back(count);
      }
      count++;
      prev = temp;
      temp = temp->next;
    }

    int n = ans.size();

    if (n < 2) {
      return {-1, -1};
    }

    int maximum = ans.back() - ans[0];
    int minimum = ans[1] - ans[0];
    for (int i = 0; i < n - 1; i++) {
      int value = ans[i + 1] - ans[i];
      minimum = min(minimum, value);
    }

    return {minimum, maximum};
  }
};

int main() {
  // Sample linked list creation (modify as needed)
  ListNode* head = new ListNode(1);
  head->next = new ListNode(3);
  head->next->next = new ListNode(2);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  Solution obj;
  vector<int> result = obj.nodesBetweenCriticalPoints(head);

  if (result[0] == -1 && result[1] == -1) {
    std::cout << "No critical points found." << std::endl;
  } else {
    std::cout << "Minimum distance between critical points: " << result[0] << std::endl;
    std::cout << "Maximum distance between critical points: " << result[1] << std::endl;
  }

  // Deallocate memory (optional)
  ListNode* temp = head;
  while (temp) {
    ListNode* next = temp->next;
    delete temp;
    temp = next;
  }

  return 0;
}
