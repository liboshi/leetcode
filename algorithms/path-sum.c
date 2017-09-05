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

bool hasPathSum(struct TreeNode* root, int sum) {
        if (root == NULL) return false;
        if (root->val == sum && root->left == NULL && root->right == NULL)
                return true;
        return (hasPathSum(root->left, sum - root->val)) || (hasPathSum(root->right, sum - root->val));
}

int main() {
        return 0;
}
