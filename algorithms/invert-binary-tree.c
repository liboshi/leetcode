/*
 * Invert binary tree
 */

struct TreeNode* invertTree(struct TreeNode* root) {
        if (root == NULL) return root;
        struct TreeNode* node = invertTree(root->right);
        root->right = invertTree(root->left);
        root->left = node;
        return root;
}
