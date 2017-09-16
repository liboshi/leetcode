#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
        if (numsSize < 2 || k == 0) return;
        k = k % numsSize;
        int i = 0;
        int n = numsSize;
        for (; i < (n - k) / 2; i++) {
                nums[i] ^= nums[n - k - 1 - i];
                nums[n - k - 1 - i] ^= nums[i];
                nums[i] ^= nums[n - k - 1 - i];
        }
        for (i = 0; i < k / 2; i++) {
                nums[i + n - k] ^= nums[n - 1 - i];
                nums[n - 1 - i] ^= nums[i + n - k];
                nums[i + n - k] ^= nums[n - 1 - i];
        }
        for (i = 0; i < n / 2; i++) {
                nums[i] ^= nums[n - 1 - i];
                nums[n - 1 - i] ^= nums[i];
                nums[i] ^= nums[n - 1 - i];
        }
        return;
}

int main() {
        return 0;
}
