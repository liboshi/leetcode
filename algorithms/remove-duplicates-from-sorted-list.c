#include <stdio.h>

struct ListNode {
        int val;
        struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
        if (head == NULL) return head;

        struct ListNode *pre = head;
        struct ListNode *p = head->next;

        while (p) {
                if (pre->val == p->val) {
                        p = p->next;
                        pre->next = p;
                } else {
                        pre = p;
                        p = p->next;
                }
        }
        return head;
}

int main() {
        return 0;
}
