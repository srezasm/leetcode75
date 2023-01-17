#include "../leetcode.h"

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        ListNode* result;
        if (l1->val < l2->val) {
            result = l1;
            l1 = l1->next;
        } else {
            result = l2;
            l2 = l2->next;
        }

        ListNode* current = result;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                current->next = l1;
                l1 = l1->next;
            } else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }

        if (l1 == NULL)
            current->next = l2;
        else
            current->next = l1;

        return result;
    }
};

int main(int argc, char const* argv[]) {
    Solution s;
    PrintListNode(s.mergeTwoLists(EvaluateListNode({1, 2, 4}),
                                  EvaluateListNode({1, 3, 4})));

    return 0;
}
