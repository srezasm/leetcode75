#include "../leetcode.h"

class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = NULL;

        while(head != NULL) {
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        
        return prev;
    }
};

int main(int argc, char const* argv[]) {
    Solution s;
    PrintListNode(s.reverseList(EvaluateListNode({1, 2, 3})));
    return 0;
}
