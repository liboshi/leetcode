#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
};

struct TreeNode* sortedArrayNode(int* nums, int low, int high);

struct TreeNode* sortedArrayNode(int* nums, int low, int high) {
        if (low > high) return NULL;
        struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        int mid = (low + high) / 2;
        root->val = nums[mid];
        root->left = sortedArrayNode(nums, low, mid - 1);
        root->right = sortedArrayNode(nums, mid + 1, high);
        return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
        return sortedArrayNode(nums, 0, numsSize - 1);
}

int main() {
        return 0;
}
