#include <stdio.h>

typedef int bool;

enum {
        false,
        true
};

struct ListNode {
        int val;
        struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
        if (head == NULL) return false;
        struct ListNode *p = head;
        struct ListNode *q = head;
        while(q->next != NULL && q->next->next != NULL) {
                p = p->next;
                q = q->next->next;
                if (p == q) return true;
        }
        return false;
}

int main() {
        return 0;
}
