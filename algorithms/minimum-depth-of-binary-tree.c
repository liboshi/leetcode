#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
};

#define min(a,b) \
        ({ __typeof__ (a) _a = (a); \
         __typeof__ (b) _b = (b); \
         _a < _b ? _a : _b; })

int minDepth(struct TreeNode* root) {
        if (root == NULL) return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (left == 0 && right == 0) {
                return 1;
        }
        else if (left && right == 0) { /* no right child */
                return left + 1;
        }
        else if (left == 0 && right) { /* no left child */
                return right + 1;
        }

        return min(left, right) + 1;
}

int main() {
        return 0;
}
