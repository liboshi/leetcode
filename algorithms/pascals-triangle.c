#include <stdio.h>
#include <stdlib.h>

/* Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
        int returnSize = numRows;
        int **ans = (int **)calloc(returnSize, sizeof(int *));
        (*columnSizes) = (int *)calloc(returnSize, sizeof(int));

        for (int i = 0; i < returnSize; i++) {
                (*columnSizes)[i] = i + 1;
                ans[i] = (int *)calloc((*columnSizes)[i], sizeof(int));
                ans[i][0] = 1;
                for (int j = 1; j < i; j++) {
                        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
                ans[i][i] = 1;
        }

        return ans;
}

int main() {
        return 0;
}
