#include "../leetcode.h"

class Solution {
   public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        int len = 0;
        while (ptr->next != NULL) {
            len++;
            ptr = ptr->next;
        }
        len = ceil((len + 1) / 2);
        for (int i = 0; i < len; i++) {
            head = head->next;
        }
        return head;
    }
};

// class Solution {
//    public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* twostep = head;
//         ListNode* onestep = head;
//         while (twostep != NULL && twostep->next != NULL) {
//             twostep = twostep->next->next;
//             onestep = onestep->next;
//         }

//         return onestep;
//     }
// };


int main(int argc, char const* argv[]) {
    Solution s;
    PrintListNode(s.middleNode(EvaluateListNode({1, 2, 3, 4, 5, 6})));

    return 0;
}
