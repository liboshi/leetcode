#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
        int top;
        unsigned capacity;
        int *array;
} MinStack;

/* initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
        MinStack *obj = (MinStack *)malloc(sizeof(MinStack));
        obj->capacity = maxSize;
        obj->top = -1;
        obj->array = (int *)malloc(sizeof(int) * obj->capacity);
        return obj;
}

void minStackPush(MinStack* obj, int x) {
        if (obj->top == obj->capacity - 1) return;
        obj->array[++obj->top] = x;
}

void minStackPop(MinStack* obj) {
        if (obj->top == -1) return;
        obj->array[obj->top--];
}

int minStackTop(MinStack* obj) {
        if (obj->top == -1) return INT_MIN;
        return obj->array[obj->top];
}

int minStackGetMin(MinStack* obj) {
        if (obj->top == -1) return INT_MIN;
        int min = obj->array[0];
        for(int i = 1; i <= obj->top; i++) {
                if (obj->array[i] < min)
                        min = obj->array[i];
        }
        return min;
}

void minStackFree(MinStack* obj) {
        free(obj->array);
        free(obj);
}

int main() {
        return 0;
}
