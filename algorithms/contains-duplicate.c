/*
 * Contains Duplicate
 */

#include <stdio.h>

typedef int bool;

enum {
        false,
        true
};

bool
containsDuplicate(int* nums, int numsSize) {
        int i;
        int j;
        for (i = 0; i < numsSize; i++) {
                for (j = i + 1; j < numsSize; j++) {
                        if (nums[i] == nums[j]) return true;
                }
        }
        return false;
}
