/*
 * Lowest Common Ancestor of a Binary Search Tree
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
        while(root) {
                if (p->val > root->val && q->val > root->val) {
                        root = root->right;
                        continue;
                }
                if (p->val < root->val && q->val < root->val) {
                        root = root->left;
                        continue;
                }
                return root;

        }
        return NULL;
}
