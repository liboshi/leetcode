#include <stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
        for (int i = digitsSize - 1; i >= 0; i--) {
                if (digits[i] == 9)
                        digits[i] = 0;
                else {
                        digits[i] = digits[i] + 1;
                        break;
                }
        }

        if (digits[0] == 0) {
                printf("here\n");
                int *arr = (int *)malloc(sizeof(int) * (digitsSize + 1));
                for (int j = 0; j <= digitsSize; j++) {
                        if (j == 0) arr[0] = 1;
                        else {
                                arr[j] = digits[j - 1];
                        }
                }
                *returnSize = digitsSize + 1;
                return arr;
        } else {
                *returnSize = digitsSize;
        }
        return digits;
}

int main() {
        return 0;
}
