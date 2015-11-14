/*
 * Same tree
 */

typedef int bool;
enum {
        false,
        true
};

bool
isSameTree(struct TreeNode* p, struct TreeNode* q) {
        if (!p && !q) return true;
        if (p && !q) return false;
        if (!p && q) return false;
        if (p->val != q->val) return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->left);
}
