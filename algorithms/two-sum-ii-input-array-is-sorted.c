#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
        int *ret = (int *)malloc(*returnSize * sizeof(int));
        if (numbersSize == 1) return NULL;

        for (int i = 0; i < numbersSize; i++) {
                int numToFind = target - numbers[i];
                int j = i + 1;
                while (j < numbersSize) {
                        if (numbers[j] == numToFind) {
                                ret[0] = i + 1;
                                ret[1] = j + 1;
                                break;
                        }
                        j++;
                }
        }
        return ret;
}

int main() {
        return 0;
}
