/*
 * Maximum Depth of Binary Tree
 */
#include <stdio.h>

#define max(a,b) \
        ({ __typeof__ (a) _a = (a); \
         __typeof__ (b) _b = (b); \
         _a > _b ? _a : _b; })

struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
};

int
maxDepth(struct TreeNode* root)
{
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int
main()
{
        struct TreeNode *root;
        root->val = 1;
        return maxDepth(root);
}
