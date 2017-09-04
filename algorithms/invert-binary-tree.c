/*
 * Invert binary tree
 */

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
        int val;
        struct TreeNode* right;
        struct TreeNode* left;
};

struct TreeNode* invertTree(struct TreeNode* root) {
        if (root == NULL) return root;
        struct TreeNode* node = invertTree(root->right);
        root->right = invertTree(root->left);
        root->left = node;
        return root;
}

int main() {
        return 0;
}
