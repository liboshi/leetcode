#include <stdio.h>
#include <stdlib.h>

int majorityElement(int* nums, int numsSize) {
        int index = 0;
        int count = 1;
        for (int i = 0; i < numsSize; i++) {
                nums[index] == nums[i] ? count++ : count--;
                if (count == 0) {
                        index = i;
                        count = 1;
                }
        }
        return nums[index];
}

int main() {
        return 0;
}
