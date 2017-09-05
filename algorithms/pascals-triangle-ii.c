#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
        *returnSize = rowIndex + 1;
        int *ret = (int *)calloc(*returnSize, sizeof(int));
        ret[0] = 1;
        for (int i = 1; i < *returnSize; i++) {
                for (int j = i; j >= 1; j--) {
                        ret[j] += ret[j - 1];
                }
        }
        return ret;
}

int main() {
        return 0;
}
