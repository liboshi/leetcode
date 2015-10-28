#include <stdio.h>

/* Definition for singly-linked list.*/
struct ListNode {
        int val;
        struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
        if (head == NULL) {
                return NULL;
        }

        struct ListNode *p;
        struct ListNode ret;
        ret.val = -1;
        ret.next = head;
        p = &ret;

        while (p->next) {
                if (p->next->val == val) {
                        p->next = p->next->next;
                } else {
                        p = p->next;
                }
        }
        return ret.next;
}
