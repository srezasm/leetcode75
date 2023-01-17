#include "../leetcode.h"

class Solution {
   public:
    ListNode* detectCycle(ListNode* head) {
        if (!head || !head->next)
            return nullptr;

        ListNode* slow = head->next;
        ListNode* fast = head->next->next;

        while (slow != fast) {
            slow = slow->next;
            if (fast == nullptr || fast->next == nullptr)
                return nullptr;
            fast = fast->next->next;
        }

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}
