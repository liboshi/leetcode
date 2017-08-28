#include <stdio.h>

void swap(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
}

void bubble_sort(int nums[], int numsSize) {
        for (int i = 0; i < numsSize - 1; i++) {
                for (int j = 0; j < numsSize - i - 1; j++) {
                        if (nums[j] > nums[j + 1])
                                swap(&nums[j], &nums[j + 1]);
                }
        }

}

void printArray(int arr[], int size)
{
        int i;
        for (i=0; i < size; i++)
                printf("%d ", arr[i]);
        printf("\n");
}
int main()
{
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
        int n = sizeof(arr)/sizeof(arr[0]);
        bubble_sort(arr, n);
        printf("Sorted array: \n");
        printArray(arr, n);
        return 0;
}
