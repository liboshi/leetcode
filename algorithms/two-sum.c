#include <stdio.h>

int*
twoSum(int* nums, int numsSize, int target) {
        int *retArray = malloc(2 * sizeof(int));
        if (numsSize == 1) {
                return NULL;
        }

        for (int i = 0; i < numsSize; i++) {
                int numToFind = target - nums[i];
                int j = i + 1;
                while (j < numsSize) {
                        if (nums[j] == numToFind) {
                                retArray[0] = i;
                                retArray[1] = j;
                                break;
                        }
                        j++;
                }
        }
        return retArray;
}

int
main() {
        return 0;
}
