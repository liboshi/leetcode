#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 */
struct ListNode {
        int val;
        struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
        int extra = 0;
        struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
        head->val = 0;
        head->next = NULL;
        struct ListNode *m = head;
        while (l1 || l2 || extra) {
                int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
                extra = sum / 10;
                struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
                p->val = sum % 10;
                p->next = NULL;
                m->next = p;
                m = p;
                l1 = l1 ? l1->next : l1;
                l2 = l2 ? l2->next : l2;

        }
        return head->next;
}

int main() {
        return 0;
}
