#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
        int count = 0;
        for (int i = 1; i < numsSize; i++) {
                if (nums[i] == nums[i-1])
                        count++;
                else
                        nums[i - count] = nums[i];
        }
        return numsSize - count;
}

int main() {
        return 0;
}
