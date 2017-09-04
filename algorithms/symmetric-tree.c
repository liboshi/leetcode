#include <stdio.h>
#include <stdlib.h>

typedef int bool;

enum {
        false,
        true
};

struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
};

bool isMirror(struct TreeNode* left, struct TreeNode* right);

bool isSymmetric(struct TreeNode* root) {
        return isMirror(root, root);
}

bool isMirror(struct TreeNode* left, struct TreeNode* right) {
        if (left == NULL && right == NULL)
                return true;
        else if (left == NULL || right == NULL)
                return false;

        return (left->val == right->val)
                && isMirror(left->right, right->left)
                && isMirror(right->left, left->right);
}

int main() {
        return 0;
}
