#include <stdio.h>
#include <stdlib.h>

struct ListNode {
        int val;
        struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
        struct ListNode *p1 = headA, *p2 = headB;
        if (p1 == NULL || p2 == NULL) return NULL;
        while(p1 != p2) {
                p1 = p1 ? p1->next : headB;
                p2 = p2 ? p2->next : headA;
        }
        return p1;
}

int main() {
        return 0;
}
