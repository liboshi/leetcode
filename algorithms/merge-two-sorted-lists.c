#include <stdio.h>
#include <stdlib.h>

struct ListNode {
        int val;
        struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
        head->val = 0;
        head->next = NULL;
        struct ListNode *ret = head;

        while (l1 && l2) {
                if (l1->val < l2->val) {
                        head->next = l1;
                        l1 = l1->next;
                } else {
                        head->next = l2;
                        l2 = l2->next;
                }
                head = head->next;
        }
        head->next = l1 ? l1 : l2;
        return ret->next;
}

int main() {
        return 0;
}
