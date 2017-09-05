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

#define max(a,b) \
        ({ __typeof__ (a) _a = (a); \
         __typeof__ (b) _b = (b); \
         _a > _b ? _a : _b; })

int depth(struct TreeNode* root);

int depth(struct TreeNode* root) {
        return root == NULL ? 0 : max(depth(root->left), depth(root->right)) + 1;
}

bool isBalanced(struct TreeNode* root) {
        if (root == NULL) return true;

        int left = depth(root->left);
        int right = depth(root->right);

        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

int main() {
        return 0;
}
