#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* EvaluateListNode(vector<int> list) {
    ListNode* head = new ListNode(list[0]);
    ListNode* p = head;
    for (int i = 1; i < list.size(); i++) {
        p->next = new ListNode(list[i]);
        p = p->next;
    }
    return head;
}

void PrintListNode(ListNode* head) {
    ListNode* p = head;
    while (p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}